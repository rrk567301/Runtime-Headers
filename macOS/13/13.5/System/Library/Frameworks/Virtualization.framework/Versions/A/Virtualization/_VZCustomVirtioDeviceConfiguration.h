@class NSObject, _VZVirtioDeviceSpecificConfiguration;
@protocol _VZCustomVirtioDeviceConfigurationDelegate, OS_dispatch_queue, OS_xpc_object;

@interface _VZCustomVirtioDeviceConfiguration : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_endpoint;
    unsigned int _customVirtioDeviceIndex;
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _mandatoryDeviceFeatures;
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _optionalDeviceFeatures;
    NSObject<OS_dispatch_queue> *_deviceQueue;
}

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
- (unsigned int)optionalFeaturesAtIndex:(unsigned long long)a0;
- (void)setMandatoryFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (void)setOptionalFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;

@end
