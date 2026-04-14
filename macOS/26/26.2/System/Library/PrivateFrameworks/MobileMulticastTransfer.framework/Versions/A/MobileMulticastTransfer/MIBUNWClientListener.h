@class NSObject;
@protocol OS_dispatch_queue, OS_nw_listener, MIBUNWClientListenerDelegate;

@interface MIBUNWClientListener : NSObject {
    id<MIBUNWClientListenerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_listener> *_listener;
}

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)description;
- (void)_start;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (void)_handleNewListenerState:(int)a0 error:(id)a1;
- (void)_handleNewNetworkConnection:(id)a0;
- (void)_stopWithReason:(id)a0;

@end
