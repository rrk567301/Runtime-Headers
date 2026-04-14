@class NSString;

@interface _VZCustomMMIODeviceProvider : NSObject <_VZVirtualMachineConfigurationEncodable>

@property (readonly) struct variant<VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier, Base::Xpc::Endpoint> { struct __impl<VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier, Base::Xpc::Endpoint> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier, Base::Xpc::Endpoint> { char x0; struct __alt<0UL, VzCore::CustomDeviceConfiguration::CommonConfiguration::PluginIdentifier> { struct PluginIdentifier { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, Base::Xpc::Endpoint> { char x0; struct __alt<1UL, Base::Xpc::Endpoint> { struct Endpoint { struct OpaqueId *x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; } _connectionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;

@end
