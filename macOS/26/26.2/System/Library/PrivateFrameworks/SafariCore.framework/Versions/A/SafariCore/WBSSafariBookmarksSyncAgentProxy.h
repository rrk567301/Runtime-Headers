@class NSString, NSXPCConnection;

@interface WBSSafariBookmarksSyncAgentProxy : NSObject <WBSSafariBookmarksSyncAgentProtocol>

@property (retain) NSXPCConnection *_safariBookmarksSyncAgentConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProxy;

- (void)triggerSafariTechnologyPreviewTabGroupSync;
- (void)migrateToCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)beginMigrationFromDAV;
- (void)deleteBackgroundImageFromCloudKitWithCompletionHandler:(id /* block */)a0;
- (void)resetToDAVDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)syncUpSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)getCloudTabContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)fetchCloudTabDevicesAndCloseRequests;
- (void)fetchTabGroupEntitiesWithCompletion:(id /* block */)a0;
- (void)dumpCloudKitDataPrintByDates:(BOOL)a0 liveOnly:(BOOL)a1 printTree:(BOOL)a2 printPlist:(BOOL)a3 writeToFile:(BOOL)a4 atFileURL:(id)a5 completionHandler:(id /* block */)a6;
- (void)deleteTabGroupEntitiesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncScribbleFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)a0 deviceUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)triggerImmediateBackgroundImageSaveIfApplicable;
- (void)deleteCloudExtensionStatesDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)syncWebCompatibilityFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;
- (void)userAccountDidChange:(long long)a0;
- (void)triggerSafariTabGroupSync;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsWithCompletionHandler:(id /* block */)a0;
- (void)getCloudExtensionStatesWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scheduleCloudBackgroundImageSaveWithURL:(id)a0 isLightAppearance:(BOOL)a1 successCompletionHandler:(id /* block */)a2;
- (void)getCloudTabDevicesWithCompletionHandler:(id /* block */)a0;
- (void)getCloudSettingsContainerManateeStateWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)observeRemoteMigrationStateForSecondaryMigration;
- (void)registerForPushNotificationsIfNeeded;
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)a0 closeRequestUUIDString:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearLocalDataIncludingMigrationState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)fetchRemoteMigrationStateWithCompletionHandler:(id /* block */)a0;
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearServerChangeTokenWithCompletionHandler:(id /* block */)a0;
- (void)deletePerSiteSettingsSyncData;
- (void)fetchCloudSettingsChangesImmediately;
- (void)deleteDevicesWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncDownSafariPerSiteSettingsSyncWithCompletion:(id /* block */)a0;
- (void)userDidUpdateBookmarkDatabase;
- (id)init;
- (void)deleteBackgroundImageDirectory;
- (void)syncDownSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)generateDAVServerIDsForExistingBookmarksWithCompletionHandler:(id /* block */)a0;
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)a0 forDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncUpSafariSettingsSyncWithCompletion:(id /* block */)a0;
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)a0 completionHandler:(id /* block */)a1;
- (void)collectDiagnosticsDataWithCompletionHandler:(id /* block */)a0;
- (void)saveCloudPerSiteSettingWithDictionaryRepresentation:(id)a0 successCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)fetchProfileEntitiesWithCompletion:(id /* block */)a0;

@end
