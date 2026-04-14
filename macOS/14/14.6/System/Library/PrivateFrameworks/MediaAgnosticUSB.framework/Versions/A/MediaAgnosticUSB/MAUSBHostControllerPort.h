@class NSMutableDictionary, IOUSBHostCIDeviceStateMachine, MAUSBHostUSBDeviceInfo, NSNumber, IOUSBHostCIPortStateMachine;

@interface MAUSBHostControllerPort : MAUSBObject

@property (retain) NSNumber *deviceHandle;
@property (retain) NSNumber *usbDeviceAddress;
@property (readonly) MAUSBHostUSBDeviceInfo *deviceInfo;
@property (readonly) IOUSBHostCIPortStateMachine *portStateMachine;
@property (retain) IOUSBHostCIDeviceStateMachine *deviceStateMachine;
@property (readonly) NSMutableDictionary *endpoints;
@property (copy) id /* block */ disconnectCompletion;
@property BOOL userRequestedDisconnect;
@property BOOL initialResetComplete;
@property (readonly) int iousbDeviceSpeed;
@property BOOL deviceDestroyPending;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDeviceInfo:(id)a0 portStateMachine:(id)a1;
- (void)processDoorbell:(unsigned int)a0 withDeviceManager:(id)a1;

@end
