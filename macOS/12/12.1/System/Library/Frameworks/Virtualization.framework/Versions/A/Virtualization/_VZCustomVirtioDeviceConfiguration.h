@class NSObject, _VZVirtioDeviceSpecificConfiguration;
@protocol _VZCustomVirtioDeviceConfigurationDelegate, OS_dispatch_queue, OS_xpc_object;

@interface _VZCustomVirtioDeviceConfiguration : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    unsigned int _customVirtioDeviceIndex;
    struct BitSet<unsigned int, 64> { struct array<unsigned int, 2> { unsigned int __elems_[2]; } _blocks; } _mandatoryDeviceFeatures;
    struct BitSet<unsigned int, 64> { struct array<unsigned int, 2> { unsigned int __elems_[2]; } _blocks; } _optionalDeviceFeatures;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

@property (readonly) struct expected<VzCore::VirtualMachineConfiguration::CustomVirtioDevice, NSError *> { union storage<VzCore::VirtualMachineConfiguration::CustomVirtioDevice, NSError *> { char x0; struct CustomVirtioDevice { unsigned short x0; unsigned char x1; unsigned char x2; unsigned short x3; struct BitSet<unsigned int, 64> { struct array<unsigned int, 2> { unsigned int x0[2]; } x0; } x4; struct BitSet<unsigned int, 64> { struct array<unsigned int, 2> { unsigned int x0[2]; } x0; } x5; struct variant<std::vector<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration>, VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration> { struct __impl<std::vector<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration>, VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration> { union __union<std::__variant_detail::_Trait::_Available, 0, std::vector<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration>, VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration> { char x0; struct __alt<0, std::vector<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration>> { struct vector<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration, std::allocator<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration>> { struct DeviceSpecificConfiguration *x0; struct DeviceSpecificConfiguration *x1; struct __compressed_pair<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration *, std::allocator<VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration>> { struct DeviceSpecificConfiguration *x0; } x2; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1, VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration> { char x0; struct __alt<1, VzCore::VirtualMachineConfiguration::CustomVirtioDevice::DeviceSpecificConfigurations::DeviceSpecificConfiguration> { struct DeviceSpecificConfiguration { struct DynamicArray<unsigned char, 0> { unsigned long long x0; struct ConditionallyInlineBuffer<unsigned char, 0> { struct OutOfLineBuffer { char *x0; } x0; } x1; } x0; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2> { } x2; } x2; } x0; unsigned int x1; } x0; } x6; struct Endpoint { struct CfPtr<NSObject<OS_xpc_object> *> { id x0; } x0; } x7; } x1; id x2; } x0; BOOL x1; } _customVirtioDevice;
@property unsigned short deviceID;
@property unsigned char PCIClassID;
@property unsigned char PCISubclassID;
@property unsigned short virtioQueueCount;
@property (retain) _VZVirtioDeviceSpecificConfiguration *deviceSpecificConfiguration;
@property (weak) id<_VZCustomVirtioDeviceConfigurationDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *deviceQueue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)mandatoryFeaturesAtIndex:(unsigned long long)a0;
- (void)setMandatoryFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (unsigned int)optionalFeaturesAtIndex:(unsigned long long)a0;
- (void)setOptionalFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (id)makeCustomVirtioDeviceWithDeviceQueue:(id)a0 sharedRamManager:(struct shared_ptr<Vz::SharedRamManager> { struct SharedRamManager *x0; struct __shared_weak_count *x1; })a1 deviceIndex:(unsigned long long)a2;

@end
