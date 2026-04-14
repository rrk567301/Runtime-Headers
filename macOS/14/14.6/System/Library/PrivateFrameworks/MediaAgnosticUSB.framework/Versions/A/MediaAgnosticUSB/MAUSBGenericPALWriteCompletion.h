@class MAUSBGenericPALInterface;

@interface MAUSBGenericPALWriteCompletion : MAUSBObject

@property (readonly, weak) MAUSBGenericPALInterface *interface;
@property (readonly) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)initWithPALInterface:(id)a0 completionBlock:(id /* block */)a1;

@end
