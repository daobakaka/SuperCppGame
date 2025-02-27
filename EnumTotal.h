#ifndef ENUM_TOTAL_H
#define ENUM_TOTAL_H
#include <glm/glm.hpp>
#include <unordered_map>
namespace Game {


	enum ModelClass
	{
		OriginalE,
		//测试模块
		CubeE,
		CubeTestE,
		CubeEVariant1,
		CubeEVarinat2,
		ActorButterfly,
		TsetButterfly,
		LightColorTestCube,
		TestPhysics,
		//特殊模块
		Ray,//射线
		AxisWidget,//坐标轴模型
		PointLight,//点光源
		FlashLight,//手电筒
		ParallelLight,//平行光
		Skybox,//天空盒
		StaticPlane,//静态地板
		//独立模块
		
	};
	enum ShaderClass
	{
		OriginalS,
		DepthCalculate,
		DepthRender,
		DepthTest,
	};
	enum CollisionType
	{
		Box,
		Sphere,
	};
	//步长结构体
	struct StepVector3
	{
		glm::vec3 position = glm::vec3(0, 0, 0);
		glm::vec3 rotation = glm::vec3(0, 0, 0);
		glm::vec3 scale = glm::vec3(1);
	};
	//碰撞体结构体
	struct CollisionProperties {
		int ID;//全局唯一身份标识
		int layer;
		
		glm::vec3 &position;    // 物体位置
		glm::vec3 &velocity;    // 物体速度
		glm::vec3 &acceleration;  // 物体加速度
		glm::vec3 _collisionMin;
		glm::vec3 _collisionMax;
		//定向参数
		float friction;
		float mass;

		//碰撞盒类型
		CollisionType type;
		//碰撞盒半径
		float radius;
		//碰撞盒形状比率
		glm::vec3 ratio;
		//碰撞状态判断
		bool isCollision;
		//触发器
		bool trigger;
		//以上三个量可以完全控制碰撞盒大小
		CollisionProperties(glm::vec3 &pos,glm::vec3 &vel,glm::vec3 &acc)
			: position(pos), velocity(vel), acceleration(acc), mass(1),friction(0.05f),_collisionMin(0),_collisionMax(0),isCollision(false),trigger(false) {}
	};

	

}
#endif













































