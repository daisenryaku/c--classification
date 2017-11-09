/*************************************************************************
	> File Name: layer.h
	> Author: daisenryaku
	> Mail: daisenryaku@163.com 
	> Created Time: Thu 09 Nov 2017 09:59:49 PM CST
 ************************************************************************/

#pragma once
#include "types.h"
#include "tensor.h"

#pragma pack(push, 1)
struct layer
{
	layer_type type;
	tensor<float> grads_in;
	tensor<float> in;
	tensor<float> out;
};
#pragma pack(pop)
