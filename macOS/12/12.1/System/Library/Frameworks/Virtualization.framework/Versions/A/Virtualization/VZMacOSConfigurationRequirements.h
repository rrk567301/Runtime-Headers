@class VZMacHardwareModel;

@interface VZMacOSConfigurationRequirements : NSObject {
    struct optional<std::tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long>> { union { char __null_state_; struct tuple<unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> { struct __tuple_impl<std::__tuple_indices<0, 1, 2, 3, 4>, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long> { unsigned long long __value_; unsigned long long __value_; unsigned long long __value_; unsigned long long __value_; unsigned long long __value_; } __base_; } __val_; } ; BOOL __engaged_; } _requiredMobileDeviceVersion;
}

@property (readonly, copy) VZMacHardwareModel *hardwareModel;
@property (readonly) unsigned long long minimumSupportedCPUCount;
@property (readonly) unsigned long long minimumSupportedMemorySize;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
