@class MAUSBGenericPALInterface;

@interface MAUSBGenericPALReadCompletion : MAUSBObject

@property (readonly, weak) MAUSBGenericPALInterface *interface;
@property (readonly) id /* block */ completionBlock;
@property (readonly) void *buffer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPALInterface:(id)a0 length:(unsigned int)a1 completionBlock:(id /* block */)a2;

@end
