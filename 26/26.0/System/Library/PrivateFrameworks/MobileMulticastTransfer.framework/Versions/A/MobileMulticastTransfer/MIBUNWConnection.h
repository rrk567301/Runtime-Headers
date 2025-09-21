@class NSString, NSObject;
@protocol OS_dispatch_source, MIBUNWConnectionDelegate, OS_dispatch_queue, OS_nw_connection;

@interface MIBUNWConnection : NSObject {
    id<MIBUNWConnectionDelegate> _delegate;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_dispatch_source> *_waitingTimer;
}

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *remoteIPv6Address;

- (void)_open;
- (void)_close;
- (void)open;
- (id)description;
- (void)close;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)_cancelTimerForWaitingState;
- (id)_getRemoteIPv6AddressFromConnection:(id)a0;
- (void)_handleNewConnectionState:(int)a0 error:(id)a1;
- (void)_scheduleNextMessageReception;
- (void)_sendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)_setupTimerForWaitingState;
- (id)initWithConfiguration:(id)a0 messageFramer:(id)a1 dispatchQueue:(id)a2 statusDelegate:(id)a3;
- (id)initWithNWConnection:(id)a0 dispatchQueue:(id)a1 statusDelegate:(id)a2;

@end
