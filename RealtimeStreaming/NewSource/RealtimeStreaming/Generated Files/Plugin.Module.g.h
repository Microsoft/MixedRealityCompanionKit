﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

#include "winrt/RealtimeStreaming.Plugin.h"

namespace winrt::RealtimeStreaming::Plugin::implementation {

template <typename D, typename... I>
struct WINRT_EBO Module_base : implements<D, RealtimeStreaming::Plugin::IModule, I...>
{
    using base_type = Module_base;
    using class_type = RealtimeStreaming::Plugin::Module;
    using implements_type = typename Module_base::implements_type;
    using implements_type::implements_type;
    
#if _MSC_VER < 1914
    operator class_type() const noexcept
    {
        static_assert(std::is_same_v<typename impl::implements_default_interface<D>::type, default_interface<class_type>>);
        class_type result{ nullptr };
        attach_abi(result, detach_abi(static_cast<default_interface<class_type>>(*this)));
        return result;
    }
#else
    operator impl::producer_ref<class_type> const() const noexcept
    {
        return { to_abi<default_interface<class_type>>(this) };
    }
#endif

    hstring GetRuntimeClassName() const
    {
        return L"RealtimeStreaming.Plugin.Module";
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_MODULE_XAML_G_H) || __has_include("Plugin.Module.xaml.g.h")

#include "Plugin.Module.xaml.g.h"

#else

namespace winrt::RealtimeStreaming::Plugin::implementation
{
    template <typename D, typename... I>
    using ModuleT = Module_base<D, I...>;
}

#endif