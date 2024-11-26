from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.substitutions import PathJoinSubstitution

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    pkg_jackal_description = FindPackageShare('jackal_description')
    pkg_jackal_viz = FindPackageShare('jackal_viz')

    rviz_config = PathJoinSubstitution(
        [pkg_jackal_viz, 'rviz', 'model.rviz']
    )

    description_launch = IncludeLaunchDescription(
        PathJoinSubstitution([
            pkg_jackal_description,
            'launch',
            'description.launch.py'])
    )

    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        output='screen',
        arguments=['-d', rviz_config]
    )
    start = Node(
        package='jackal_bbl',  
        executable='start',  
        name='start_node'
    )
    
    bezier_subscriber = Node(
        package='jackal_bbl',  
        executable='bezier_subscriber',  
        name='bezier_subscriber'
    )
    
    path_visualizer = Node(
        package='jackal_bbl',  
        executable='path_visualizer',  
        name='path_visualizer'
    )
    ld = LaunchDescription()
    ld.add_action(joint_state_publisher_gui_node)
    ld.add_action(description_launch)
    ld.add_action(rviz_node)
    ld.add_action(start)
    ld.add_action(bezier_subscriber)
    ld.add_action(path_visualizer)
    return ld
