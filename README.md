# Instructions

Create a workspace:

```
mkdir -p ~/temp_ws/src
cd ~/temp_ws/src
```

Get this code:

```
git clone https://github.com/wjwwood/catkin_demos
cd catkin_demos
git checkout ros_answers_52744
cd ../..
```

Source your existing catkin/std_msgs workspace:

```
# For ubuntu
source /opt/ros/groovy/setup.bash
```

Build everything:

```
catkin_make
```

Source your devel space:

```
source devel/setup.bash
```

Run:

```
rosrun foo foo_node
```

