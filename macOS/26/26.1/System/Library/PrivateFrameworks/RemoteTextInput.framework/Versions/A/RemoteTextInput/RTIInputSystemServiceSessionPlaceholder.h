@interface RTIInputSystemServiceSessionPlaceholder : RTIInputSystemServiceSession

+ (id)placeholderServiceSessionWithIdentifier:(id)a0 traits:(id)a1 state:(id)a2;

- (void)flushOperations;
- (id)valueForEntitlement:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)_killConnectionWithCallback;
- (int)pid;
- (id)bundleIdentifier;
- (void)flushOperationsWithResultHandler:(id /* block */)a0;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)a0;
- (void)didInitializeWithConnection:(id)a0;
- (id)initWithIdentifier:(id)a0 traits:(id)a1 state:(id)a2;

@end
