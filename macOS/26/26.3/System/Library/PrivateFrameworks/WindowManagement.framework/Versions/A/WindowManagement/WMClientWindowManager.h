@class NSString, NSMutableDictionary, NSObject, BSServiceConnection;
@protocol WMClientWindowManagerDelegate, OS_dispatch_queue;

@interface WMClientWindowManager : NSObject <WMXPCClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activeWindows;
    NSMutableDictionary *_cachedWindowIdentifierToWindowSnapshot;
    BSServiceConnection *_connection;
    int _serverLaunchNotificationToken;
    BOOL _waitingForReconnect;
}

@property (weak, nonatomic) id<WMClientWindowManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertStagesToStageFrames:(id)a0;

- (id)_connection;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)stages;
- (void)notifyClickDidEndOnDesktopBackgroundWindow:(id)a0;
- (void)performAsynchronousBridgedWindowManagementOperation:(id)a0;
- (id)performSynchronousBridgedWindowManagementOperation:(id)a0;
- (void)performWindowTransaction:(id)a0;
- (id)prepareWindowTransaction:(id)a0;
- (id)proposeKeyWindowWithInfo:(id)a0;
- (id)proposeMainWindowWithInfo:(id)a0;
- (void)sendWindowTransaction:(id)a0;
- (void)_reconnect;
- (oneway void)updateStages:(id)a0 displayChangeSeed:(id)a1;
- (id)_createBSConnection;
- (void)_handleInterruptionFromConnection:(id)a0;
- (void)_handleInvalidationFromConnection:(id)a0;
- (void)_performXPCTransaction:(id)a0;
- (void)_registerForLaunchNotification;
- (id)_serverProxy;
- (oneway void)applyAgentPropertySnapshots:(id)a0;
- (oneway void)handleRestoreTilingStateActionResponse:(id)a0;
- (oneway void)hideApplicationResponse:(id)a0;
- (oneway void)makeKeyWindowWithWindowIdentifier:(id)a0;
- (oneway void)performResizeWindowRequest:(id)a0;
- (oneway void)proposeKeyAndMainApplicationResponse:(id)a0 mainWindow:(id)a1;
- (oneway void)resignKeyWindowWithWindowIdentifier:(id)a0;
- (id)stageFrames;
- (oneway void)unhideApplicationResponse:(id)a0;
- (oneway void)windowDeminiaturizationResponse:(id)a0;
- (oneway void)windowMiniaturizationResponse:(id)a0;

@end
