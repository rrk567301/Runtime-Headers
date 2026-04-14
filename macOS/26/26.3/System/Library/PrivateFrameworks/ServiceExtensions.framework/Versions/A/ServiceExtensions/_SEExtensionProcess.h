@interface _SEExtensionProcess : NSObject

@property (nonatomic, readonly) struct { unsigned int x0[8]; } auditToken;

- (void)invalidate;
- (id)init;
- (id)grantCapability:(id)a0 error:(id *)a1;
- (id)makeLibXPCConnectionError:(id *)a0;
- (id)grantCapabilities:(id)a0 error:(id *)a1;

@end
