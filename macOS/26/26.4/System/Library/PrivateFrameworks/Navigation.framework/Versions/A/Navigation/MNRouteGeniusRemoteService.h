@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, MNRouteGeniusDelegateProxy;

@interface MNRouteGeniusRemoteService : NSObject <MNRouteGeniusDelegateProxy> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    id<MNRouteGeniusDelegateProxy> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceReroute;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (void)stopWithReason:(long long)a0;
- (void)_q_closeConnection;
- (BOOL)_q_openConnectionIfNecessary;
- (void)didUpdateRouteGenius:(id)a0 updateReason:(long long)a1 stopReason:(long long)a2;

@end
