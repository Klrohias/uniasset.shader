//
// Created by qingy on 2024/8/2.
//

#include "uniasset.shader/thirdparty/unity-headers/IUnityInterface.h"
#include "uniasset.shader/thirdparty/unity-headers/IUnityGraphics.h"
#include "uniasset.shader/PlatformDefinitions.hpp"

extern "C" void UNITY_INTERFACE_EXPORT UNITY_INTERFACE_API
Uniasset_UnityPluginLoad(IUnityInterfaces* unityInterfaces) {
    auto* graphics = unityInterfaces->Get<IUnityGraphics>();
}
