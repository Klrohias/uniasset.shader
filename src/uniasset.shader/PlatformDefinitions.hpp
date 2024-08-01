//
// Created by qingy on 2024/8/2.
//


#pragma once
#ifndef UNIASSET_SHADER_PLATFORMDEFINITIONS_HPP
#define UNIASSET_SHADER_PLATFORMDEFINITIONS_HPP

#if defined(__APPLE__)
#include <TargetConditionals.h>
#endif

#if defined(TARGET_OS_IPHONE)
#define UniassetShader_StaticLinkage 1
#endif

#if defined(UniassetShader_StaticLinkage)
#define UniassetShader_UnityPluginLoad UniassetShader_UnityPluginLoad
#define UniassetShader_UnityPluginUnload UniassetShader_UnityPluginUnload
#else
#define UniassetShader_UnityPluginLoad UnityPluginLoad
#define UniassetShader_UnityPluginUnload UnityPluginUnload
#endif

#endif //UNIASSET_SHADER_PLATFORMDEFINITIONS_HPP
