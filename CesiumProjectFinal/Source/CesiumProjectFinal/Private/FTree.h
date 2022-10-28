#pragma once

#include <random>
#include <vector>

struct FTree {
	
	// Values are in standard Unreal Engine coordinates (centimeters)
	float positionX;
	float positionY;
	float positionZ;
	float height;
	float canopyRadius;
};

inline std::vector<FTree> createTrees(size_t numberToCreate) {
	std::default_random_engine generator;
	std::uniform_real_distribution<float> positionDistribution(0.0, 100000.0);
	std::uniform_real_distribution<float> heightDistribution(2.0, 10000.0);
	std::uniform_real_distribution<float> canopyRadiusDistribution(1.0, 5000.0);

	std::vector<FTree> result(numberToCreate);

	for (size_t i = 0; i < numberToCreate; ++i) {
		result[i] = FTree {
			positionDistribution(generator),
			positionDistribution(generator),
			positionDistribution(generator),
			heightDistribution(generator),
			canopyRadiusDistribution(generator)
		};
	}

	return result;
}