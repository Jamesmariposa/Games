class Entity{
public: Entity();
		Entity(float x, float y, float z, float aggroRange, int entitiesInRange);
		float getx();
		float gety();
		float getz();
		float getAggroRange();
		int getEntitiesInRange();
		void updateX(float x);
		void updateY(float x);
		void updateZ(float x);
		void updateAggroRange(float x);
		void updateEntitiesInRange(float x);
private: float x, y, z, aggroRange;
		 int entitiesInRange;
};
