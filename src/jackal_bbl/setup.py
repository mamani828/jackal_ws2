from setuptools import setup
import os
from glob import glob

package_name = 'jackal_bbl'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # Fixed duplicate line and syntax error in launch files glob
        (os.path.join('share', package_name, 'launch'), 
         glob(os.path.join('launch', '*launch.[pxy][yma]*'))),
        # Added rviz config files
        (os.path.join('share', package_name, 'rviz'),
         glob(os.path.join('rviz', '*.rviz'))),
        # Fixed URDF files path
        (os.path.join('share', package_name, 'urdf'),
         glob(os.path.join('urdf', '*.*'))),
        # Added meshes if you have any
        (os.path.join('share', package_name, 'meshes'),
         glob(os.path.join('meshes', '*.*'))),
        # Added config files if you have any
        (os.path.join('share', package_name, 'config'),
         glob(os.path.join('config', '*.*'))),
    ],
    install_requires=['setuptools', 'sdf_marching'],
    zip_safe=True,
    maintainer='mani123',
    maintainer_email='mani123@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'start = jackal_bbl.start_node:main',
            'bezier_subscriber = jackal_bbl.bezier_subscriber:main',
            'path_visualizer = jackal_bbl.path_visualizer:main',
            'follow = jackal_bbl.follower_node:main',
        ],
    },
)
