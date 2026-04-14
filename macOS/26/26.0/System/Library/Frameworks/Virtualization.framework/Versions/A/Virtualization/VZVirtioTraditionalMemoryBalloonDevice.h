@class VZVirtualMachine;

@interface VZVirtioTraditionalMemoryBalloonDevice : VZMemoryBalloonDevice {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    unsigned long long _memoryBalloonDeviceIndex;
    unsigned long long _maxTargetVirtualMachineMemorySize;
    unsigned long long _targetVirtualMachineMemorySize;
}

@property (readonly) unsigned long long _maxTargetVirtualMachineMemorySize;
@property unsigned long long targetVirtualMachineMemorySize;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
