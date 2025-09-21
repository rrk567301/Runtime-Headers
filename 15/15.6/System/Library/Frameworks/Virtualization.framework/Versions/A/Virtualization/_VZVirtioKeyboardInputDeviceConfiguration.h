@interface _VZVirtioKeyboardInputDeviceConfiguration : VZKeyboardConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct variant<VzCore::VirtualMachineConfiguration::Keyboards::Usb, VzCore::VirtualMachineConfiguration::Keyboards::Virtio> { struct __impl<VzCore::VirtualMachineConfiguration::Keyboards::Usb, VzCore::VirtualMachineConfiguration::Keyboards::Virtio> { union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 0UL, VzCore::VirtualMachineConfiguration::Keyboards::Usb, VzCore::VirtualMachineConfiguration::Keyboards::Virtio> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::Keyboards::Usb> { struct Usb { unsigned int x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 1UL, VzCore::VirtualMachineConfiguration::Keyboards::Virtio> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::Keyboards::Virtio> { struct Virtio { unsigned int x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_TriviallyAvailable, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })_keyboardWithDeviceIdentifier:(unsigned int)a0;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;
- (id)makeKeyboardForVirtualMachine:(id)a0 deviceIdentifier:(unsigned int)a1;

@end
