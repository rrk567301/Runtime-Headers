@class MAUSBGenericPALInterface, NSNumber;

@interface MAUSBGenericPALReadCompletion : MAUSBObject

@property (readonly, weak) MAUSBGenericPALInterface *interface;
@property (readonly) id /* block */ completionBlock;
@property (readonly) void *buffer;
@property (readonly) NSNumber *pipeRefNumber;
@property unsigned char error;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPALInterface:(id)a0 length:(unsigned int)a1 completionBlock:(id /* block */)a2 pipeRef:(id)a3;

@end
