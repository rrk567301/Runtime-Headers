@class NSString, NSMutableDictionary, NSXPCConnection, NSArray;
@protocol WMClientWindowManagerDelegate;

@interface WMClientWindowManager : NSObject <WMXPCClientInterface> {
    NSMutableDictionary *_activeWindows;
    NSMutableDictionary *_cachedWindowIdentifierToWindowSnapshot;
    NSXPCConnection *_xpcConnection;
    NSArray *_windowsToMinimizePostTransactionHandling;
    int _serverLaunchNotificationToken;
}

@property (weak, nonatomic) id<WMClientWindowManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertStagesToStageFrames:(id)a0;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_xpcConnection;
- (id)proposeMainWindowWithInfo:(id)a0;
- (id)proposeKeyWindowWithInfo:(id)a0;
- (id)stages;
- (void)performWindowTransaction:(id)a0;
- (void)_reconnectIfNecessary;
- (void)_reconnect;
- (id)_createXPCConnection;
- (void)makeKeyWindowWithWindowIdentifier:(id)a0;
- (void)resignKeyWindowWithWindowIdentifier:(id)a0;
- (void)updateStages:(id)a0 displayChangeSeed:(unsigned long long)a1;
- (void)windowMiniaturizationResponse:(id)a0;
- (void)windowDeminiaturizationResponse:(id)a0;
- (void)hideApplicationResponse:(id)a0;
- (void)unhideApplicationResponse:(id)a0;
- (void)proposeKeyAndMainApplicationResponse:(id)a0 mainWindow:(id)a1;
- (void)applyAgentPropertySnapshots:(id)a0;
- (id)stageFrames;
- (void)_performXPCTransaction:(id)a0;
- (id)_createWindowPropertySnapshotForWindow:(id)a0 properties:(unsigned long long)a1;
- (void)_handleInvalidationFromConnection:(id)a0;
- (void)_handleInterruptionFromConnection:(id)a0;
- (void)_registerForLaunchNotification;

@end
