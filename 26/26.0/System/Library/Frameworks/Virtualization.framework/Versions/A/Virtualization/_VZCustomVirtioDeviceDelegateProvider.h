@class NSObject;
@protocol OS_dispatch_queue, _VZCustomVirtioDeviceConfigurationDelegate, OS_xpc_object;

@interface _VZCustomVirtioDeviceDelegateProvider : _VZCustomVirtioDeviceProvider {
    NSObject<OS_xpc_object> *_endpoint;
}

@property (readonly) NSObject<OS_dispatch_queue> *deviceQueue;
@property (readonly, weak) id<_VZCustomVirtioDeviceConfigurationDelegate> delegate;

- (void).cxx_destruct;
- (struct variant<VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier, Base::Xpc::Endpoint> { struct __impl<VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier, Base::Xpc::Endpoint> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier, Base::Xpc::Endpoint> { char x0; struct __alt<0UL, VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier> { struct PluginIdentifier { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, Base::Xpc::Endpoint> { char x0; struct __alt<1UL, Base::Xpc::Endpoint> { struct Endpoint { struct OpaqueId *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })_connectionIdentifier;
- (id)initWithDeviceQueue:(id)a0 delegate:(id)a1;

@end
