@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchProfileEntitiesWithCompletion:(id /* block */)a0;
- (void)userAccountDidChange:(long long)a0;
- (void)deleteTabGroupEntitiesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginMigrationFromDAV;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)forceBookmarkSync;
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)triggerSafariTechnologyPreviewTabGroupSync;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)registerForPushNotificationsIfNeeded;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)dumpCloudKitDataPrintByDates:(BOOL)a0 liveOnly:(BOOL)a1 printTree:(BOOL)a2 printPlist:(BOOL)a3 writeToFile:(BOOL)a4 atFileURL:(id)a5 completionHandler:(id /* block */)a6;
- (void).cxx_destruct;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)userDidUpdateBookmarkDatabase;
- (void)fetchCloudSettingsChangesImmediately;
- (void)clearServerChangeTokenWithCompletionHandler:(id /* block */)a0;
- (void)fetchTabGroupEntitiesWithCompletion:(id /* block */)a0;
- (void)deleteBackgroundImageDirectory;
- (id)init;
- (void)deletePerSiteSettingsSyncData;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)triggerSafariTabGroupSync;
- (void)syncWebCompatibilityFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)syncScribbleFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;

@end
