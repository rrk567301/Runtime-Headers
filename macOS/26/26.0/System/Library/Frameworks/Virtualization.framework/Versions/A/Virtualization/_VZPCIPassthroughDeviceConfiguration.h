@interface _VZPCIPassthroughDeviceConfiguration : _VZPCIDeviceConfiguration {
    unsigned int _domain;
    struct PciDeviceLocation { unsigned int _bus_number; unsigned int _device_number; unsigned int _function_number; } _location;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (struct expected<VzCore::VirtualMachineConfiguration::Pci::PassthroughDevice, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<VzCore::VirtualMachineConfiguration::Pci::PassthroughDevice, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<VzCore::VirtualMachineConfiguration::Pci::PassthroughDevice, NSError *>::__union_t> { union __union_t { struct PassthroughDevice { unsigned int x0; struct PciDeviceLocation { unsigned int x0; unsigned int x1; unsigned int x2; } x1; } x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })_pciDevice;
- (struct expected<NSDictionary *, NSError *> { struct __conditional_no_unique_address<true, std::__expected_base<NSDictionary *, NSError *>::__repr> { struct __repr { struct __conditional_no_unique_address<false, std::__expected_base<NSDictionary *, NSError *>::__union_t> { union __union_t { id x0; id x1; } x0; } x0; BOOL x1; } x0; } x0; })encodeWithEncoder:(id)a0;
- (id)initWithDomain:(unsigned int)a0 bus:(unsigned char)a1 device:(unsigned char)a2 function:(unsigned char)a3;

@end
