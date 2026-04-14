@class NSObject;
@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)defaultBroadcaster;

- (void)blockUntilSendQueueIsEmpty;
- (id)broadcastProxyForTargets:(id)a0 messageContext:(id)a1 protocol:(id)a2;
- (id)init;
- (id)_queue;
- (id)broadcastProxyForTarget:(id)a0 messageContext:(id)a1 protocol:(id)a2 priority:(int)a3;
- (void)dealloc;
- (id)broadcastProxyForTarget:(id)a0 messageContext:(id)a1 protocol:(id)a2 priority:(int)a3 completion:(id /* block */)a4;
- (void)flushProxy:(id)a0;
- (id)broadcastProxyForTarget:(id)a0 messageContext:(id)a1 protocol:(id)a2;

@end
