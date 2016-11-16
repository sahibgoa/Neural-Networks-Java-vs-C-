//
// Created by Haylee on 11/13/2016.
//

#ifndef NEURAL_NETWORKS_JAVA_VS_C_NODEWEIGHTPAIR_HPP
#define NEURAL_NETWORKS_JAVA_VS_C_NODEWEIGHTPAIR_HPP

#include "Node.hpp"

class NodeWeightPair{
private:
    Node node; //The parent node
    double weight; //Weight of this connection

    // Create an object with a given parent node and connect weight
public:
    NodeWeightPair(Node node, double weight);

    /**
     * Return thr weight of this NodeWeightPair
     *
     * @return weight of this NodeWeightPair
     */
    double getWeight();

    /**
    * Adds more weight(in parameter) to the current value of weight
    *
    * @param weight : the weight to be added
    */
    void addWeight(double weight);
};
#endif //NEURAL_NETWORKS_JAVA_VS_C_NODEWEIGHTPAIR_HPP
