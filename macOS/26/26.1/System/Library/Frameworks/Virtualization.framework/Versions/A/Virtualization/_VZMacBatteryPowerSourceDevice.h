@class _VZMacBatterySource, NSString, VZVirtualMachine;

@interface _VZMacBatteryPowerSourceDevice : _VZPowerSourceDevice <_VZMacBatterySourceObserver> {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    unsigned long long _powerSourceDeviceIndex;
    _VZMacBatterySource *_source;
}

@property (retain) _VZMacBatterySource *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)batterySource:(id)a0 didUpdateCharge:(double)a1;
- (void)batterySource:(id)a0 didUpdateConnectivity:(long long)a1;

@end
