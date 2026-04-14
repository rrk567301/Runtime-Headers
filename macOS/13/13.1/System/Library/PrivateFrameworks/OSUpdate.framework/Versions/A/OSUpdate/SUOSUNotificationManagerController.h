@class NSMutableArray, NSXPCConnection, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface SUOSUNotificationManagerController : NSObject <SUOSUNotificationManagerServiceClientProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSLock *serviceConnectionLock;
@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain) NSMutableArray *restartCountdownDownloadProgressHandlers;
@property (retain) NSMutableArray *restartCountdownDownloadCompletionHandlers;
@property (copy) id /* block */ customInterruptionHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_connectToService;
- (void)removeAllNotifications;
- (void)startInstallingDoItLaterUpdates;
- (void)startInstallingUpdatesForKeys:(id)a0 withOptions:(id)a1;
- (void)startInstallingUpdateForProductMarketingVersion:(id)a0 withOptions:(id)a1;
- (void)queueAutoUpdatesForLaterWithCompletion:(id /* block */)a0;
- (void)postMajorOSUpdateMDMRequestedNotification;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)a0 offerLater:(BOOL)a1;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterInsufficientPowerNotification;
- (void)silentlyQuitApps:(id)a0 completionHandler:(id /* block */)a1;
- (void)relaunchAnyQuitApps;
- (void)postSemiSplatNotificationWithOptions:(id)a0;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)a0 orVersion:(id)a1;
- (void)mdmUpdateStatusWithCompletion:(id /* block */)a0;
- (void)postAndProceedWithAutoUpdateNotification:(id /* block */)a0;
- (void)restartCountdownDownloadProgress:(float)a0 status:(id)a1;
- (void)restartCountdownDownloadFinishedWithError:(id)a0;
- (void)postMDMRequestedInstallLaterNotificationToAllLoggedInUsersWithOptions:(id)a0;
- (void)postMDMRequestedInstallNowNotificationToAllLoggedInUsersWithOptions:(id)a0;
- (BOOL)queueAutoUpdatesForLater;
- (void)addProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)startDownloadingUpdatesForRestartCountdown:(id)a0 mobileSoftwareUpdateDescriptors:(id)a1 error:(id *)a2 withOptions:(id)a3 progressHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (BOOL)cancelDownloadingUpdatesForRestartCountdown;
- (BOOL)cancelRestartCountdownOperation;
- (BOOL)armRestartCountdown;
- (BOOL)disarmRestartCountdown;
- (void)quitAppsWithModalAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)postUpdatesAvailableNotificationIfEligible;
- (void)postRestartCountdownNotificationWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)triggerSplatRevokedNotificationWithVersion:(id)a0 options:(id)a1 withCompletion:(id /* block */)a2;
- (void)postSemiSplatFailedNotification;
- (BOOL)triggerAppleConnectWithError:(id *)a0;
- (id)_synchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)_asynchronousServiceWithErrorHandler:(id /* block */)a0;
- (BOOL)_authorizeServiceForInstall;

@end
