@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)init;
- (void)servicePurgeable:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)servicePurge:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)servicePeriodic:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)serviceCancelPurge:(id /* block */)a0;
- (void)servicePing:(id /* block */)a0;
- (void)serviceNotify:(id)a0 replyBlock:(id /* block */)a1;
- (void)serviceCallback:(id)a0 replyBlock:(id /* block */)a1;

@end
