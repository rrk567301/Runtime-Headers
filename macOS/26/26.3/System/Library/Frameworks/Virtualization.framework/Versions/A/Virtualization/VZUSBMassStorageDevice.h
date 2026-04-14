@class NSUUID, NSString, VZVirtualMachine, VZUSBMassStorageDeviceConfiguration, VZUSBController;

@interface VZUSBMassStorageDevice : VZStorageDevice <_VZUSBDeviceInternal, VZUSBDevice>

@property (copy) VZUSBMassStorageDeviceConfiguration *configuration;
@property (readonly, copy) VZUSBMassStorageDeviceConfiguration *usbMassStorageConfiguration;
@property (weak) VZVirtualMachine *virtualMachine;
@property (weak) VZUSBController *usbController;
@property (readonly) BOOL isPointingDevice;
@property (readonly, copy) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
