@class MAUSBHostControllerPort, NSMutableArray, MAUSBHostDeviceManager, NSObject, IOUSBHostControllerInterfaceWrapper;
@protocol OS_dispatch_queue, MAUSBHostControllerDelegate;

@interface MAUSBHostController : MAUSBObject <MAUSBHostDeviceManagerDelegate> {
    id<MAUSBHostControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    IOUSBHostControllerInterfaceWrapper *_usbController;
    MAUSBHostDeviceManager *_deviceManager;
    MAUSBHostControllerPort *_port;
    NSMutableArray *_openDeviceInfos;
    unsigned int _poweredPortCount;
}

@property (readonly) char ready;

- (void).cxx_destruct;
- (void)handleCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (char)establishSessionWithCompletion:(id /* block */)a0;
- (char)usbInit;
- (char)createDeviceForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (char)createEndpointForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (char)createNonRootDeviceForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (char)destroyDeviceForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (char)destroyEndpointForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (id)deviceInfoForRouteString:(id)a0;
- (char)disconnectUSBDeviceInfoInternal:(id)a0 userRequested:(char)a1 completion:(id /* block */)a2;
- (char)disconnectUSBDeviceWithInfo:(id)a0 completion:(id /* block */)a1;
- (void)handleControllerCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (void)handleDoorbellArray:(unsigned int *)a0 doorbellCount:(unsigned int)a1;
- (void)handlePortCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0 forStateMachine:(id)a1;
- (void)hostDeviceManager:(id)a0 sessionStateChanged:(unsigned long long)a1;
- (void)hostDeviceManager:(id)a0 transmitDataPacket:(id)a1;
- (void)hostDeviceManager:(id)a0 transmitManagementPacket:(id)a1;
- (id)initWithDelegate:(id)a0 hostCapabilities:(id)a1 mediaType:(unsigned long long)a2 queue:(id)a3 ssid:(unsigned char)a4 deviceAddress:(unsigned char)a5 captureFileLocation:(id)a6;
- (void)inputPacket:(id)a0;
- (void)messageReceivedWithType:(unsigned int)a0 argument:(void *)a1;
- (char)openUSBDeviceWithInfo:(id)a0 completion:(id /* block */)a1;
- (char)openUSBDeviceWithInfoInternal:(id)a0 userRequested:(char)a1 completion:(id /* block */)a2;
- (char)pauseDeviceForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (void)removePortForUSBDeviceAddress:(unsigned char)a0;
- (char)resetPortForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0 withStateMachine:(id)a1;
- (void)sendErrorMessageForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;
- (char)updateDeviceForCommand:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0;

@end
