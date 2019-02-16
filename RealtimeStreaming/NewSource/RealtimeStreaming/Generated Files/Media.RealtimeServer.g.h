﻿// WARNING: Please don't edit this file. It was generated by C++/WinRT v1.0.180821.2

#pragma once

#include "winrt/RealtimeStreaming.Network.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/Windows.Media.Core.h"
#include "winrt/Windows.Media.MediaProperties.h"
#include "winrt/RealtimeStreaming.Plugin.h"
#include "winrt/Windows.Media.h"
#include "winrt/RealtimeStreaming.Media.h"

namespace winrt::RealtimeStreaming::Media::implementation {

template <typename D, typename B, typename... I>
struct WINRT_EBO RealtimeServer_base : implements<D, RealtimeStreaming::Media::IRealtimeServer, B, no_module_lock, I...>
{
    using base_type = RealtimeServer_base;
    using class_type = RealtimeStreaming::Media::RealtimeServer;
    using implements_type = typename RealtimeServer_base::implements_type;
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
        return L"RealtimeStreaming.Media.RealtimeServer";
    }
};

}

namespace winrt::RealtimeStreaming::Media::factory_implementation {

template <typename D, typename T, typename... I>
struct WINRT_EBO RealtimeServerT : implements<D, Windows::Foundation::IActivationFactory, RealtimeStreaming::Media::IRealtimeServerFactory, I...>
{
    using instance_type = RealtimeStreaming::Media::RealtimeServer;

    hstring GetRuntimeClassName() const
    {
        return L"RealtimeStreaming.Media.RealtimeServer";
    }

    Windows::Foundation::IInspectable ActivateInstance() const
    {
        throw hresult_not_implemented();
    }

    RealtimeStreaming::Media::RealtimeServer CreateInstance(RealtimeStreaming::Network::Connection const& connection, winrt::guid const& inputMediaType, Windows::Media::MediaProperties::MediaEncodingProfile const& mediaEncodingProperties)
    {
        return make<T>(connection, inputMediaType, mediaEncodingProperties);
    }
};

}

#if defined(WINRT_FORCE_INCLUDE_REALTIMESERVER_XAML_G_H) || __has_include("Media.RealtimeServer.xaml.g.h")

#include "Media.RealtimeServer.xaml.g.h"

#else

namespace winrt::RealtimeStreaming::Media::implementation
{
    template <typename D, typename... I>
    using RealtimeServerT = RealtimeServer_base<D, I...>;
}

#endif