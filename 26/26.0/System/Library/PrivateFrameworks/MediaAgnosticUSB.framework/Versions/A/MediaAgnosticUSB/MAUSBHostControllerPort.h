@class IOUSBHostCIPortStateMachine, NSMutableDictionary;

@interface MAUSBHostControllerPort : MAUSBObject {
    NSMutableDictionary *_devices;
}

@property (readonly) IOUSBHostCIPortStateMachine *portStateMachine;
@property BOOL initialResetComplete;

- (void)addDevice:(id)a0;
- (void)dealloc;
- (id)deviceForAddress:(unsigned char)a0;
- (void)removeDevice:(id)a0;
- (void).cxx_destruct;
- (id)deviceForRouteString:(unsigned int)a0;
- (id)initWithDevice:(id)a0 portStateMachine:(id)a1;

@end
