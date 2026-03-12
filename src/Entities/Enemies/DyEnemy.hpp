#pragma once
#include "Enemy.hpp"

class DyEnemy : public Enemy {
    private: 
        float angle = 135;
        float aimAngle = 225;
        bool loop = false;
        Rectangle skinType;

    public:
        DyEnemy(float x, float y) : Enemy(x, y) {
            if (GetRandomValue(1, 2) == 0){
                this->skinType = Rectangle{2, 128, 13, 14};
            }else{
                this->skinType = Rectangle{2, 147, 13, 13};
            }
            this->cooldown = GetRandomValue(90, 300);
            this->health = 1; 
        }

        void draw() override;
        void update(std::pair<float, float> pos, HitBox target) override;
        void attack(HitBox target) override;
};