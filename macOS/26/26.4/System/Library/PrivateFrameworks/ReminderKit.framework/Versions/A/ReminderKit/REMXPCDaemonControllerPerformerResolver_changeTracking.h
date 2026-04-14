@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_changeTracking : REMXPCDaemonControllerPerformerResolver

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken;

- (id)name;
- (id)initWithStoreContainerToken:(id)a0;
- (void).cxx_destruct;
- (void)resolveWithDaemon:(id)a0 reason:(id)a1 completion:(id /* block */)a2;

@end
