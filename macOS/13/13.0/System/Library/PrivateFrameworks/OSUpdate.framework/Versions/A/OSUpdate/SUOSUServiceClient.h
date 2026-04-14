@class NSString, NSXPCConnection;

@interface SUOSUServiceClient : NSObject <SUOSUServiceClientProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *name;
@property (retain) NSString *path;
@property int pid;
@property unsigned int uid;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)startInstallingDoItLaterUpdates;
- (void)startInstallingUpdatesForKeys:(id)a0 withOptions:(id)a1;
- (void)startInstallingUpdateForProductMarketingVersion:(id)a0 withOptions:(id)a1;
- (void)queueAutoUpdatesForLaterWithCompletion:(id /* block */)a0;
- (void)postMajorOSUpdateMDMRequestedNotification;
- (void)postMDMRequestedInstallLaterNotificationWithOptions:(id)a0;
- (void)postMDMRequestedInstallNowNotificationWithOptions:(id)a0;
- (void)postDoItLaterUpdatesFailedNotificationRestartRequired:(BOOL)a0 offerLater:(BOOL)a1;
- (void)postDoItLaterOtherUsersLoggedInNotification;
- (void)postDoItLaterInsufficientPowerNotification;
- (void)postRestartRequiredNotificationToAllLoggedInUsersWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)silentlyQuitApps:(id)a0 completionHandler:(id /* block */)a1;
- (void)relaunchAnyQuitApps;
- (void)postSemiSplatNotificationWithOptions:(id)a0;
- (void)triggerSplatRevokedNotificationWithVersion:(id)a0 options:(id)a1;
- (void)startInstallingMDMMajorOSUpdateWithBundleId:(id)a0 orVersion:(id)a1;
- (void)mdmUpdateStatusWithCompletion:(id /* block */)a0;
- (void)postAndProceedWithAutoUpdateNotification:(id /* block */)a0;
- (void)restartCountdownDownloadProgress:(float)a0 status:(id)a1;
- (void)restartCountdownDownloadFinishedWithError:(id)a0;
- (void)performExternalUpdateWithProductKeys:(id)a0 withOptions:(id)a1 withProgressCompletion:(id /* block */)a2;
- (void)performActionsDuringPostLogoutWithProductKeys:(id)a0 withOptions:(id)a1 withProgressBlock:(id /* block */)a2;
- (BOOL)queueAutoUpdatesForLater;
- (BOOL)isActiveClient;
- (void)doMDMMajorOSDownloadAndUpdateWithBundleID:(id)a0 orVersion:(id)a1;

@end
