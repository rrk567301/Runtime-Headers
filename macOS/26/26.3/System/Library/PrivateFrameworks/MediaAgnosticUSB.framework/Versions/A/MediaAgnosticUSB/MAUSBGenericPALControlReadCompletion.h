@class MAUSBGenericPALDevice, MAUSBControlSetupPacket;

@interface MAUSBGenericPALControlReadCompletion : MAUSBObject

@property (readonly, weak) MAUSBGenericPALDevice *pal;
@property (readonly) MAUSBControlSetupPacket *setupPacket;
@property (readonly) id /* block */ completionBlock;
@property (readonly) void *buffer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPAL:(id)a0 setupPacket:(id)a1 completionBlock:(id /* block */)a2;

@end
