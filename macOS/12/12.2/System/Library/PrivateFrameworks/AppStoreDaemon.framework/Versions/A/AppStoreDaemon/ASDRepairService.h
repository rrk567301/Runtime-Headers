@class ASDServiceBroker;

@interface ASDRepairService : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)defaultService;

- (void).cxx_destruct;
- (id)initWithServiceBroker:(id)a0;
- (void)refreshKeybagWithReplyHandler:(id /* block */)a0;
- (void)repairAppWithOptions:(id)a0 replyHandler:(id /* block */)a1;
- (id)_asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_callRepairServiceWithOptions:(id)a0 replyHandler:(id /* block */)a1;
- (void)_notifyRepairServiceWithOptions:(id)a0 replyHandler:(id /* block */)a1;

@end
