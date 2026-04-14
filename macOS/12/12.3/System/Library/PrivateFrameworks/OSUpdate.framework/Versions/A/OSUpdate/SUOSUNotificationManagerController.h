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
- (void)postMDMRequestedInstallNowNotificationToAllLoggedInUsersWithOptions:(id)a0;
- (void)postMDMRequestedInstallLaterNotificationToAllLoggedInUsersWithOptions:(id)a0;
- (void)restartCountdownDownloadProgress:(float)a0 status:(id)a1;
- (void)restartCountdownDownloadFinishedWithError:(id)a0;
- (void)postAndProceedWithAutoUpdateNotification:(id /* block */)a0;
- (BOOL)queueAutoUpdatesForLater;
- (void)postMajorOSUpdateMDMRequestedNotification;
- (void)mdmUpdateStatusWithCompletion:(id /* block */)a0;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)a0 orVersion:(id)a1;
- (void)startInstallingUpdatesForKeys:(id)a0 withOptions:(id)a1;
- (void)startInstallingUpdateForProductMarketingVersion:(id)a0 withOptions:(id)a1;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterInsufficientPowerNotification;
- (void)startInstallingDoItLaterUpdates;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)a0 offerLater:(BOOL)a1;
- (void)postRestartCountdownNotificationWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)addProgressHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)cancelRestartCountdownOperation;
- (BOOL)startDownloadingUpdatesForRestartCountdown:(id)a0 mobileSoftwareUpdateDescriptors:(id)a1 error:(id *)a2 withOptions:(id)a3 progressHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (BOOL)armRestartCountdown;
- (BOOL)cancelDownloadingUpdatesForRestartCountdown;
- (BOOL)_authorizeServiceForInstall;
- (id)_synchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)_asynchronousServiceWithErrorHandler:(id /* block */)a0;
- (void)silentlyQuitApps:(id)a0 completionHandler:(id /* block */)a1;
- (void)relaunchAnyQuitApps;
- (void)quitAppsWithModalAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)postUpdatesAvailableNotificationIfEligible;
- (BOOL)disarmRestartCountdown;

@end
