@interface SASandboxExtensionVendor : NSObject

+ (void)vendWithAuditToken:(struct { unsigned int x0[8]; })a0 resource:(int)a1 readonly:(BOOL)a2 completion:(id /* block */)a3;

@end
