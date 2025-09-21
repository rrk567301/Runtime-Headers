@class NSString;

@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>

@property (class, readonly, nonatomic) HMDFeaturesDataSource *defaultDataSource;

@property (readonly, getter=isPersistentBulletinRegistrationsFeatureEnabled) BOOL persistentBulletinRegistrationsFeatureEnabled;
@property (readonly, getter=isHomeActivityStateFeatureEnabled) BOOL homeActivityStateFeatureEnabled;
@property (readonly, getter=isHomeActivityStateReplacesPresenceMonitorFeatureEnabled) BOOL homeActivityStateReplacesPresenceMonitorFeatureEnabled;
@property (readonly, getter=isLocalPresenceDebugBulletinEnabled) BOOL localPresenceDebugBulletinEnabled;
@property (readonly, getter=isCheckAdaptiveTemperatureAutomationsMFiCapabilityEnabled) BOOL checkAdaptiveTemperatureAutomationsMFiCapabilityEnabled;
@property (readonly, getter=isCheckCleanEnergyAutomationMFiCapabilityEnabled) BOOL checkCleanEnergyAutomationMFiCapabilityEnabled;
@property (readonly, getter=isUserActivityStateDetectionFeatureEnabled) BOOL userActivityStateDetectionFeatureEnabled;
@property (readonly, getter=isLocalPresenceEnabled) BOOL localPresenceEnabled;
@property (readonly, getter=isStateSyncEnabled) BOOL stateSyncEnabled;
@property (readonly, getter=isWakeOnLanV2Enabled) BOOL wakeOnLanV2Enabled;
@property (readonly, getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled;
@property (readonly, getter=isHH2MigrationDryRunEnabled) BOOL hh2MigrationDryRunEnabled;
@property (readonly, getter=isNativeMatterEnabled) BOOL nativeMatterEnabled;
@property (readonly, getter=isRVCEnabled) BOOL RVCEnabled;
@property (readonly, getter=isMatterTTUEnabled) BOOL matterTTUEnabled;
@property (readonly, getter=isSHADEREnabled) BOOL SHADEREnabled;
@property (readonly, getter=isSHADERMercuryEnabled) BOOL SHADERMercuryEnabled;
@property (readonly, getter=isDemoModeV2Enabled) BOOL demoModeV2Enabled;
@property (readonly, getter=isStereoOdeonTTSUBypassingPrimaryEnabled) BOOL stereoOdeonTTSUBypassingPrimaryEnabled;
@property (readonly, getter=isPlannerSupportEnabled) BOOL plannerSupportEnabled;
@property (readonly, getter=isCascadeDonationsEnabled) BOOL cascadeDonationEnabled;
@property (readonly, getter=isHomeControlsEnabled) BOOL homeControlsEnabled;
@property (readonly, getter=isNetworkInfoMonitorEnabled) BOOL networkInfoMonitorEnabled;
@property (readonly, getter=isNetworkDiagnosticsEnabled) BOOL networkDiagnosticsEnabled;
@property (readonly, getter=isCrossfadeAsAirplaySourceEnabled) BOOL crossfadeAsAirplaySourceEnabled;
@property (readonly, getter=isRapportOverBLEEnabled) BOOL rapportOverBLEEnabled;
@property (readonly, getter=isBulletinNotificationGroupsEnabled) BOOL bulletinNotificaionGroupsEnabled;
@property (readonly, getter=isCommunicationTrustInvitationsEnabled) BOOL communicationTrustInvitationsEnabled;
@property (readonly) BOOL isActivityHistory2025Enabled;
@property (readonly, getter=isMessageBindingsEnabled) BOOL messageBindingsEnabled;
@property (readonly, getter=isWifiPickerApiEnabled) BOOL wifiPickerApiEnabled;
@property (readonly, getter=isCoalesceAccessoryNotificationEnabled) BOOL coalesceAccessoryNotificationEnabled;
@property (readonly, getter=isCoreHAPRetryRequestsEnabled) BOOL coreHAPRetryRequestsEnabled;
@property (readonly, getter=isWiFiRepairV2Enabled) BOOL wifiRepairV2Enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
