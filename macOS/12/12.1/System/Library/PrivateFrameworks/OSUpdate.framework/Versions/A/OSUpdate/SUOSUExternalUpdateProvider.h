@class NSLock, NSMutableArray, NSXPCConnection;
@protocol SUOSUExternalUpdateProviderDelegate;

@interface SUOSUExternalUpdateProvider : NSObject <SUOSUServiceClientProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain, nonatomic) NSLock *serviceConnectionLock;
@property (retain) NSMutableArray *progressHandlers;
@property (weak) id<SUOSUExternalUpdateProviderDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)proxy;
- (id)_serviceConnection;
- (void)restartCountdownDownloadProgress:(float)a0 status:(id)a1;
- (void)restartCountdownDownloadFinishedWithError:(id)a0;
- (void)postMDMRequestedInstallLaterNotificationWithOptions:(id)a0;
- (void)postMDMRequestedInstallNowNotificationWithOptions:(id)a0;
- (void)postMajorOSUpdateMDMRequestedNotification;
- (void)mdmUpdateStatusWithCompletion:(id /* block */)a0;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)a0 orVersion:(id)a1;
- (void)startInstallingUpdatesForKeys:(id)a0 withOptions:(id)a1;
- (void)startInstallingUpdateForProductMarketingVersion:(id)a0 withOptions:(id)a1;
- (void)performExternalUpdateWithProductKeys:(id)a0 withOptions:(id)a1 withProgressCompletion:(id /* block */)a2;
- (void)performActionsDuringPostLogoutWithProductKeys:(id)a0 withOptions:(id)a1 withProgressBlock:(id /* block */)a2;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterInsufficientPowerNotification;
- (void)startInstallingDoItLaterUpdates;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)a0 offerLater:(BOOL)a1;
- (void)postAndProceedWithAutoUpdateNotification:(id /* block */)a0;
- (void)queueAutoUpdatesForLaterWithCompletion:(id /* block */)a0;
- (id)synchronousProxy;
- (id)_filteredProductKeysFromProductKeys:(id)a0;
- (void)sendAvailableUpdates:(id)a0;
- (void)sendAvailableUpdates;
- (void)sendReadyToPerformUpdateNotification;
- (id)availableUpdatesFromDaemon;

@end
