@class NSObject;
@protocol OS_dispatch_queue;

@interface SDXPCClientConnection : CSXPCConnection

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void).cxx_destruct;
- (void)handleError:(id)a0;
- (void)invalidationHandler;
- (id)initWithServiceName:(id)a0 clientType:(long long)a1;

@end
