#ifndef ACTOR_H_
#define ACTOR_H_

#include "Enums.h"
#include "Pawn.h"
#include <SFML/Graphics.hpp>

// For testing
#include <vector>

namespace sf {

	class Texture;
}

class Actor : public Pawn {
public:

	Actor(const sf::Texture& playerTexture);
	virtual ~Actor();
	virtual void move(float elapsedTime, int direction);
	virtual void move(float elapsedTime, sf::Vector2f pos);
	void setSpeed(int speed);
	void setStopCounter(int new_counter);
	void setPastPosition(sf::Vector2f pos);
	void faceActor(Actor& other_actor);
	void setCollision(bool collision);
	bool getCollision();
	std::string getScene();
	bool allowMovement(float elapsedTime);
	sf::FloatRect getCollisionBox();
	sf::Vector2f getPastPosition();
	sf::Vector2f getCurrentTarget();
	virtual void collided();
	void disableMovement();
	void addTargetPosition(sf::Vector2f pos);
	void cycleMovement(float elapsedTime);
	void setScene(std::string scene_name);
	virtual std::string getClass();
	bool hasTarget();
	void setCurrentTarget(sf::Vector2f pos);
	void Actor::popTarget();
	
private:
	int pastDirection;
	unsigned int tile_counter = 0;
	int actorSpeed = 4;
	int time_counter = 0;
	int stop_counter = 100;
	bool tile_move_set = false;
	bool movement_complete = true;
	bool collision = false;
	bool stop = false;
	std::string actorScene = "";
	sf::Vector2f pastPosition;
	std::vector<sf::Vector2f> targetPositions;

};
#endif