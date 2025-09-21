@interface CacheDeleteRemoteExtensionContext : NSExtensionContext <CacheDeleteServiceProtocol>

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)servicePurge:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)serviceNotify:(id)a0 replyBlock:(id /* block */)a1;
- (void)serviceCancelPurge:(id /* block */)a0;
- (id)init;
- (void)serviceCallback:(id)a0 replyBlock:(id /* block */)a1;
- (void)servicePurgeable:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)servicePeriodic:(int)a0 info:(id)a1 replyBlock:(id /* block */)a2;
- (void)servicePing:(id /* block */)a0;

@end
