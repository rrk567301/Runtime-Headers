@class NSUUID, NSString, _VZIOUSBHostPassthroughDeviceConfiguration, VZVirtualMachine, VZUSBController, IOUSBHostDevice;

@interface _VZIOUSBHostPassthroughDevice : NSObject <_VZUSBDeviceInternal, VZUSBDevice> {
    IOUSBHostDevice *_usbHostDevice;
}

@property (copy) _VZIOUSBHostPassthroughDeviceConfiguration *configuration;
@property (readonly, copy) _VZIOUSBHostPassthroughDeviceConfiguration *ioUSBHostDeviceConfiguration;
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
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)_processIOUSBHostDeviceMessage:(unsigned int)a0 messageArgument:(void *)a1 virtualMachine:(id)a2;
- (void)_releaseDevice;

@end
