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

- (void)start;
- (void)stop;
- (void)forceReroute;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_q_closeConnection;
- (BOOL)_q_openConnectionIfNecessary;
- (void)didUpdateRouteGenius:(id)a0;

@end
