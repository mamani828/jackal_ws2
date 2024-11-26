import sys
if sys.prefix == '/home/mani123/anaconda3/envs/ros2_env':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mani123/jackal_ws/install/jackal_bbl'
