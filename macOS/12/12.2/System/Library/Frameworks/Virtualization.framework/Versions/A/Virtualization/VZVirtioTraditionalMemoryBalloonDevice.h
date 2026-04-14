@class VZVirtualMachine, VZVirtioTraditionalMemoryBalloonDeviceConfiguration;

@interface VZVirtioTraditionalMemoryBalloonDevice : VZMemoryBalloonDevice {
    VZVirtualMachine *_virtualMachine;
    VZVirtioTraditionalMemoryBalloonDeviceConfiguration *_configuration;
    unsigned long long _targetVirtualMachineMemorySize;
    unsigned long long _maxTargetVirtualMachineMemorySize;
}

@property (readonly) unsigned long long _maxTargetVirtualMachineMemorySize;
@property unsigned long long targetVirtualMachineMemorySize;

- (void).cxx_destruct;

@end
