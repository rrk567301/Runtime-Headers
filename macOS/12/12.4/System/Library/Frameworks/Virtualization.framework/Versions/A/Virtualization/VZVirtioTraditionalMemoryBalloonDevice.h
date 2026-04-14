@class VZVirtualMachine;

@interface VZVirtioTraditionalMemoryBalloonDevice : VZMemoryBalloonDevice {
    VZVirtualMachine *_virtualMachine;
    unsigned long long _memoryBalloonDeviceIndex;
    unsigned long long _maxTargetVirtualMachineMemorySize;
    unsigned long long _targetVirtualMachineMemorySize;
}

@property (readonly) unsigned long long _maxTargetVirtualMachineMemorySize;
@property unsigned long long targetVirtualMachineMemorySize;

- (void).cxx_destruct;

@end
