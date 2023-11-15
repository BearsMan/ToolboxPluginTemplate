// ToolboxPluginTemplate.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <ToolboxPlugin.h>

class MyToolboxPlugin : public ToolboxPlugin {
public:
    MyToolboxPlugin() = default;
    ~MyToolboxPlugin() override = default;

    const char* Name() const override { return "My Toolbox Plugin"; }
    bool HasSettings() const override { return true; }
    void Initialize(ImGuiContext* ctx, ImGuiAllocFns allocator_fns, HMODULE toolbox_dll) override;

    std::wstring settingsPath;
};
