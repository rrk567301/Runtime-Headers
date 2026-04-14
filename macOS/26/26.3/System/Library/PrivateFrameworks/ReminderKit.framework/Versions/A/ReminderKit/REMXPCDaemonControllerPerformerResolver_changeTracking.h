@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_changeTracking : REMXPCDaemonControllerPerformerResolver

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken;

- (id)name;
- (void)resolveWithDaemon:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithStoreContainerToken:(id)a0;

@end
