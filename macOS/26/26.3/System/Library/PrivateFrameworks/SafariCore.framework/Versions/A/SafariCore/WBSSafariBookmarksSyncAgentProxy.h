@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)fetchProfileEntitiesWithCompletion:(id /* block */)a0;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)deletePerSiteSettingsSyncData;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)userAccountDidChange:(long long)a0;
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)clearServerChangeTokenWithCompletionHandler:(id /* block */)a0;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)syncWebCompatibilityFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;
- (void)registerForPushNotificationsIfNeeded;
- (void)fetchTabGroupEntitiesWithCompletion:(id /* block */)a0;
- (void)deleteTabGroupEntitiesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)userDidUpdateBookmarkDatabase;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void)syncScribbleFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;
- (void)beginMigrationFromDAV;
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteBackgroundImageDirectory;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)fetchCloudSettingsChangesImmediately;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)triggerSafariTechnologyPreviewTabGroupSync;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)triggerSafariTabGroupSync;
- (void)dumpCloudKitDataPrintByDates:(BOOL)a0 liveOnly:(BOOL)a1 printTree:(BOOL)a2 printPlist:(BOOL)a3 writeToFile:(BOOL)a4 atFileURL:(id)a5 completionHandler:(id /* block */)a6;
- (void)fetchCloudTabDevicesAndCloseRequests;

@end
