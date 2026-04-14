@class NSString;

@interface VZKeyboardConfiguration : NSObject <_VZVirtualMachineConfigurationEncodable, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct variant<VzCore::VirtualMachineConfiguration::Keyboards::Usb, VzCore::VirtualMachineConfiguration::Keyboards::Virtio, VzCore::VirtualMachineConfiguration::Keyboards::Avp> { struct __impl<VzCore::VirtualMachineConfiguration::Keyboards::Usb, VzCore::VirtualMachineConfiguration::Keyboards::Virtio, VzCore::VirtualMachineConfiguration::Keyboards::Avp> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::Keyboards::Usb, VzCore::VirtualMachineConfiguration::Keyboards::Virtio, VzCore::VirtualMachineConfiguration::Keyboards::Avp> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::Keyboards::Usb> { struct Usb { unsigned int x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, VzCore::VirtualMachineConfiguration::Keyboards::Virtio, VzCore::VirtualMachineConfiguration::Keyboards::Avp> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::Keyboards::Virtio> { struct Virtio { unsigned int x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL, VzCore::VirtualMachineConfiguration::Keyboards::Avp> { char x0; struct __alt<2UL, VzCore::VirtualMachineConfiguration::Keyboards::Avp> { struct Avp { unsigned int x0; BOOL x1; BOOL x2; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 3UL> { } x2; } x2; } x2; } x0; unsigned int x1; } x0; })_keyboardWithDeviceIdentifier:(unsigned int)a0;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)makeKeyboardForVirtualMachine:(id)a0 deviceIdentifier:(unsigned int)a1;

@end
