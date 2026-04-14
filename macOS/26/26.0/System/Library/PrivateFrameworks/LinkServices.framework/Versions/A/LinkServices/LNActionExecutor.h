@class NSDate, NSString, LNActionExecutorPassthroughDelegate, LNProgressPropertySynchronizer, NSUUID, LNActionExecutorOptions, LNAction, LNActionMetadata, NSProgress, NSObject, LNConnection;
@protocol LNActionExecutorDelegate, OS_os_activity;

@interface LNActionExecutor : NSObject <LNConnectionClientInterface, NSXPCProxyCreating, NSProgressReporting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lastCheckInLock;
}

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier;
@property (retain, nonatomic) LNActionExecutorPassthroughDelegate *showOutputActionPassthroughDelegate;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } progressSubscriptionLock;
@property (retain, nonatomic) id progressSubscriber;
@property (retain, nonatomic) NSProgress *executionProgress;
@property (retain, nonatomic) LNProgressPropertySynchronizer *progressPropertySynchronizer;
@property (retain, nonatomic) NSDate *lastCheckIn;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (copy, nonatomic) LNActionMetadata *_showOutputActionMetadata;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) LNConnection *connection;
@property (readonly, copy, nonatomic) LNActionExecutorOptions *options;
@property (readonly, copy, nonatomic) LNAction *action;
@property (weak, nonatomic) id<LNActionExecutorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)setState:(long long)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)perform;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)requestActionConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestCancelTimeout;
- (void)requestChoice:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestContinueInApp:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestExtendTimeout;
- (void)requestOpenURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterConfirmation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterDisambiguation:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestParameterNeedsValue:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestViewSnippetEnvironmentWithCompletion:(id /* block */)a0;
- (void)getXPCListenerConnectionInterfaceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_logTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)donateActionIfNecessary:(id)a0 result:(id)a1 completionHandler:(id /* block */)a2;
- (void)getConnectionInterfaceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)getPrimaryConnectionInterfaceWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAction:(id)a0 connection:(id)a1 options:(id)a2;
- (void)linkUndoManagerToMainAppIfNecessary:(id)a0 completionHandler:(id /* block */)a1;
- (void)openActionURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)performWithoutValidation;
- (void)requestAppProtectionUnlockWithCompletionHandler:(id /* block */)a0;
- (void)requestViewSnippetSizeWithCompletion:(id /* block */)a0;
- (void)runShowOutputActionIfNecessary:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCompletedWithError:(id)a0;
- (BOOL)shouldDismissSiri;
- (BOOL)shouldDismissSiriWithDefault:(BOOL)a0;
- (void)unsubscribeProgressObservation;
- (BOOL)validateEntitlementsForConnection:(id)a0;
- (BOOL)validateURLSchemeBeforeLaunching;

@end
