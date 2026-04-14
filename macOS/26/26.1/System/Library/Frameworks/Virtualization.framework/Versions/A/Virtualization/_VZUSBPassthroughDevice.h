@class NSUUID, NSString, AAUSBAccessory, VZVirtualMachine, VZUSBController, _VZUSBPassthroughDeviceConfiguration;

@interface _VZUSBPassthroughDevice : NSObject <_VZUSBDeviceInternal, VZUSBDevice> {
    AAUSBAccessory *_accessory;
}

@property (copy) _VZUSBPassthroughDeviceConfiguration *configuration;
@property (weak) VZVirtualMachine *virtualMachine;
@property (weak) VZUSBController *usbController;
@property (readonly) BOOL isPointingDevice;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)signature;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;

@end
