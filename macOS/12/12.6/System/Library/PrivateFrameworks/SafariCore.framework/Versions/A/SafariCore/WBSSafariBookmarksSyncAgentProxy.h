@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginMigrationFromDAV;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)fetchCloudSettingsChangesImmediately;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)saveCloudBackgroundImageWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)registerForPushNotificationsIfNeeded;
- (void)userDidUpdateBookmarkDatabase;
- (void)userAccountDidChange:(long long)a0;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)triggerSafariTabGroupSync;
- (void)triggerSafariTechnologyPreviewTabGroupSync;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)fetchCloudTabDevicesAndCloseRequests;

@end
