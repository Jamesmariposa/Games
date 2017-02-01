class Entity{
public: Entity();
		Entity(float x, float y, float z, float aggroRange, int entitiesInRange);
		float getx();
		float gety();
		float getz();
		float getAggroRange();
		int getEntitiesInRange();
		void updateAggroRange(float x);
private: float x, y, z, aggroRange;
		 int entitiesInRange;
};
