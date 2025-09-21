@class NSArray, NSString;

@interface SafariSettingsSyncEngineAccessMac : NSObject <WBSSettingsSyncEngineAccess>

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_attemptUpdatingSavingPerSiteSettingsWithRecord:(id)a0;
- (void)didDeleteRemoteRecordWithID:(id)a0;
- (void)_updatePerSiteSettingsWithRecord:(id)a0;
- (void)_installMobileAssetIfApplicableWithURL:(id)a0;
- (BOOL)_isKnownPerSiteSetting:(id)a0;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (void)_updatePerSiteSettingsWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateStartPageCloudTabsConsent:(id)a0;
- (long long)_settingForValue:(id)a0;
- (BOOL)syncEnabled;
- (id)_perSitePreferencesStore;
- (id)_secureDefaults;
- (id)_startPageSectionOrder;
- (void)_updatePageZoomPerSiteSettingWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateStartPageSectionOrder:(id)a0;
- (void)_updateStartPageSectionVisibilityPreferenceKey:(id)a0 withRecord:(id)a1;
- (void)_updateStartPageSectionWithIdentifier:(id)a0 withRecord:(id)a1;
- (id)_zoomPreferenceManager;
- (void)clearAllPageZoomSyncData;
- (id)macZoomPreferences;
- (id)pageZoomSyncDataForRecordName:(id)a0;
- (void)setPageZoomSyncData:(id)a0 forRecordName:(id)a1 completionHandler:(id /* block */)a2;

@end
