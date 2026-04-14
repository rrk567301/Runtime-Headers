@class NSMutableArray, NSString, _EXHostSession, NSObject, _EXHostViewControllerConfiguration;
@protocol OS_dispatch_source, _EXHostViewControllerProtocol;

@interface _EXHostSessionDriver : NSObject <_EXHostSessionDelegate>

@property (retain) _EXHostSession *session;
@property (retain) _EXHostSession *activeSession;
@property (retain) _EXHostViewControllerConfiguration *retryConfiguration;
@property (retain) NSObject<OS_dispatch_source> *deactivateSessionTimer;
@property (retain) NSMutableArray *deactivatingSessions;
@property (weak) id<_EXHostViewControllerProtocol> hostViewController;
@property BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (id)makeXPCConnectionWithError:(id *)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)hostSessionViewControllerReady:(id)a0;
- (id)extensionProcess;
- (void)hostSessionDidInvalidate:(id)a0;
- (void)hostSessionDidPrepareForHosting:(id)a0;
- (id)hostSessionHostView:(id)a0;
- (id)initWithHostViewController:(id)a0;
- (void)invalidateDeactivatingSessions;
- (void)notifyHostViewControllerDidEndHosting:(id)a0;
- (void)notifyHostViewControllerWillDeactivate:(id)a0;
- (void)scheduleInvalidations;
- (void)startSessionWithConfiguration:(id)a0;

@end
