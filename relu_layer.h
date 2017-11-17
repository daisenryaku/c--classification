/*************************************************************************
	> File Name: relu_layer.h
	> Author: daisenryaku
	> Mail: daisenryaku@163.com 
	> Created Time: Thu 16 Nov 2017 01:51:30 PM CST
 ************************************************************************/

#pragma once 
#include "layer.h"

#pragma pack(push, 1)
struct relu_layer
{
	layer_type type = layer_type::relu;
};
#pragma pack(pop)
