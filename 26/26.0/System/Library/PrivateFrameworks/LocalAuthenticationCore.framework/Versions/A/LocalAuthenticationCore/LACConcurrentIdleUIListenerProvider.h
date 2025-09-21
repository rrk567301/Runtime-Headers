@class NSObject;
@protocol OS_dispatch_queue, LACConcurrentIdleUIXPCHandling, LACConcurrentIdleUIHandling;

@interface LACConcurrentIdleUIListenerProvider : NSObject <LACConcurrentIdleUIListenerProviding, NSXPCListenerDelegate>

@property (readonly, weak, nonatomic) id<LACConcurrentIdleUIXPCHandling, LACConcurrentIdleUIHandling> handler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)anonymousListenerWithIdentifier:(id)a0;
- (id)initWithHandler:(id)a0 replyQueue:(id)a1;

@end
