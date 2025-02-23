// Documentation: ./Documentation/ImageTest/Page1.txt
// Created by: Captain Bear
// Created on: 23.02.2025

#include <iostream>

class NeuronalNetwork {
public:
	double bias;
	double weights[33177600]; // Weights array with the size of 33177600 (8K(7680x4320))
	double x[33177600]; // Input Neurons array with the size of 33177600 (8K(7680x4320))
	double y[7];        // Output Neurons array with the size of 7
private:
	double calculateNextNeuron(double Neuron[33177600], double TargetNeurons[7]) {
		double suma[33177600];
		for (int i = 0; i < 33177600; i++) {
			suma[i] = Neuron[i] * weights[i];
		}
		double sum;
		for (int i = 0; i < 33177600; i++) {
			sum + suma[i];
		}
		for (int i = 0; i < 7; i++) {
			TargetNeurons[i] = sum + bias;
		}
		return TargetNeurons;
	}
};
int main() {
	NeuronalNetwork network;
	network.bias = 0.5;
	for (int i = 0; i < 33177600; i++) {
		network.weights[i] = 0.5;
		network.x[i] = 0.5;
	}
	double Output[7] = network.calculateNextNeuron(network.x, network.y);
	for (int i = 0; i < 7; i++) {
		std::cout << Output[i] << std::endl;
	}
	system("PAUSE");
	return 0;
}