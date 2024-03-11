# Author: TheUncivil
# Licensed under Apache 2.0


import launch
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode


def generate_launch_description():
    container = ComposableNodeContainer(
            name='pneuma_core_container',
            namespace='',
            package='rclcpp_components',
            executable='component_container',
            composable_node_descriptions=[
                ComposableNode(
                    namespace='',
                    package='pneuma_core',
                    plugin='pneuma::core::Core',
                    name='pneuma_core'),
            ],
            output='screen',
    )

    return launch.LaunchDescription([container])