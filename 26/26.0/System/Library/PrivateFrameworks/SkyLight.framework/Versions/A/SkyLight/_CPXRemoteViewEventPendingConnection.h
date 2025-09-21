@class BSServiceConnection, NSString, CPXRemoteViewEventServer;
@protocol BSServiceConnectionHost, BSInvalidatable;

@interface _CPXRemoteViewEventPendingConnection : NSObject <BSServiceListenerConnectionEventObserver> {
    BOOL _active;
    id<BSInvalidatable> _observerToken;
}

@property (retain) CPXRemoteViewEventServer *handler;
@property (readonly) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptConnection;
- (void)dealloc;
- (void)rejectConnection;
- (BOOL)activate;
- (void).cxx_destruct;
- (void)connection:(id)a0 revokedWithEvent:(id)a1;
- (id)initWithConnection:(id)a0 handler:(id)a1;

@end
