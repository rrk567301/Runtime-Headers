@class _EXHostViewControllerSessionConfiguration, NSString, _EXHostViewControllerSession, _EXHostConfiguration, NSObject, NSMutableArray;
@protocol OS_dispatch_source, _EXHostViewControllerProtocol;

@interface _EXHostSessionDriver : NSObject <_EXHostViewControllerSessionDelegate>

@property (retain) _EXHostViewControllerSession *activeSession;
@property (retain) _EXHostConfiguration *retryProcessConfiguration;
@property (retain) _EXHostViewControllerSessionConfiguration *retrySessionConfiguration;
@property (retain) NSObject<OS_dispatch_source> *deactivateSessionTimer;
@property (retain) NSMutableArray *deactivatingSessions;
@property (weak) id<_EXHostViewControllerProtocol> hostViewController;
@property char active;
@property (retain) _EXHostViewControllerSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (id)makeXPCConnectionWithError:(id *)a0;
- (char)shouldAcceptXPCConnection:(id)a0;
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
- (void)startSessionWithProcessConfiguration:(id)a0 configuration:(id)a1;

@end
