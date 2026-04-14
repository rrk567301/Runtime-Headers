@class NSDictionary;

@interface _VZAppleTouchScreenConfiguration : _VZMultiTouchDeviceConfiguration {
    NSDictionary *_registryProperties;
}

@property (copy, setter=_setRegistryProperties:) NSDictionary *_registryProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct variant<VzCore::VirtualMachineConfiguration::MultiTouchDevices::AvpTouchScreen, VzCore::VirtualMachineConfiguration::MultiTouchDevices::UsbTouchScreen> { struct __impl<VzCore::VirtualMachineConfiguration::MultiTouchDevices::AvpTouchScreen, VzCore::VirtualMachineConfiguration::MultiTouchDevices::UsbTouchScreen> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::MultiTouchDevices::AvpTouchScreen, VzCore::VirtualMachineConfiguration::MultiTouchDevices::UsbTouchScreen> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::MultiTouchDevices::AvpTouchScreen> { struct AvpTouchScreen { struct CfPtr<const __CFDictionary *> { struct __CFDictionary *x0; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::MultiTouchDevices::UsbTouchScreen> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::MultiTouchDevices::UsbTouchScreen> { struct UsbTouchScreen { } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })_multiTouchDevice;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeMultiTouchDeviceForVirtualMachine:(id)a0 multiTouchDeviceIndex:(unsigned long long)a1;

@end
