// dear imgui: Platform Backend for Xbox 360
// This needs to be used along with a Renderer (e.g. DirectX9)

// Implemented features:
//  [ ] Platform: Clipboard support.
//  [ ] Platform: Keyboard support. Since 1.87 we are using the io.AddKeyEvent() function. Pass ImGuiKey values to all key functions e.g. ImGui::IsKeyPressed(ImGuiKey_Space).
//  [X] Platform: Gamepad support. Enabled with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [ ] Platform: Mouse cursor shape and visibility. Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.

// You can use unmodified imgui_impl_* files in your project. See examples/ folder for examples of using this.
// Prefer including the entire imgui/ repository into your project (either as a copy or as a submodule), and only build the backends you need.
// If you are new to Dear ImGui, read documentation from the docs/ folder + read the top of imgui.cpp.
// Read online: https://github.com/ocornut/imgui/tree/master/docs

#pragma once
#include "imgui.h"      // IMGUI_IMPL_API

IMGUI_IMPL_API bool     ImGui_ImplXbox360_Init();
IMGUI_IMPL_API void     ImGui_ImplXbox360_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplXbox360_NewFrame();
