@class NSString, _VZCustomVirtioDeviceProvider, _VZVirtioDeviceSpecificConfiguration;

@interface _VZCustomVirtioDeviceConfiguration : NSObject <NSCopying> {
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _mandatoryDeviceFeatures;
    struct BitSet<unsigned int, 64UL> { struct array<unsigned int, 2UL> { unsigned int __elems_[2]; } _blocks; } _optionalDeviceFeatures;
    BOOL _supportsSaveRestore;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _deviceID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCIVendorID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCIDeviceID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCISubsystemVendorID;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _PCISubsystemID;
}

@property (copy, setter=_setPluginName:) NSString *_pluginName;
@property (copy, setter=_setPluginPersonality:) NSString *_pluginPersonality;
@property unsigned short deviceID;
@property unsigned char PCIClassID;
@property unsigned char PCISubclassID;
@property unsigned short virtioQueueCount;
@property (retain) _VZVirtioDeviceSpecificConfiguration *deviceSpecificConfiguration;
@property (retain) _VZCustomVirtioDeviceProvider *provider;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned short)_PCISubsystemID;
- (unsigned short)_PCIDeviceID;
- (unsigned short)_PCISubsystemVendorID;
- (unsigned short)_PCIVendorID;
- (void)_setPCIDeviceID:(unsigned short)a0;
- (void)_setPCISubsystemID:(unsigned short)a0;
- (void)_setPCISubsystemVendorID:(unsigned short)a0;
- (void)_setPCIVendorID:(unsigned short)a0;
- (void)_setSupportsSaveRestore:(BOOL)a0;
- (BOOL)_supportsSaveRestore;
- (unsigned int)mandatoryFeaturesAtIndex:(unsigned long long)a0;
- (unsigned int)optionalFeaturesAtIndex:(unsigned long long)a0;
- (void)setMandatoryFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;
- (void)setOptionalFeatures:(unsigned int)a0 atIndex:(unsigned long long)a1;

@end
