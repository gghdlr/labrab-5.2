#pragma once
template <typename T>
class Player
{
private:
	T hand;
public:
	Player(T hand):hand(hand){}
	T getHand() {
		return hand;
	}
	void setHand(T hand) {
		this->hand= hand;
	}
};

