// ToolboxPluginTemplate.cpp : Defines the entry point for the application.
//

#include "MyToolboxPlugin.h"

DLLAPI ToolboxPlugin* ToolboxPluginInstance()
{
    static MyToolboxPlugin instance;
    return &instance;
}

void MyToolboxPlugin::Initialize(ImGuiContext* ctx, ImGuiAllocFns allocator_fns, HMODULE toolbox_dll)
{
    ToolboxPlugin::Initialize(ctx, allocator_fns, toolbox_dll);
    GW::Initialize();
}