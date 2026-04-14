@class NSString;

@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>

@property (class, readonly, nonatomic) HMDFeaturesDataSource *defaultDataSource;

@property (readonly) BOOL isWatch;
@property (readonly, getter=isPersistentBulletinRegistrationsFeatureEnabled) BOOL persistentBulletinRegistrationsFeatureEnabled;
@property (readonly, getter=isLocalPresenceDebugBulletinEnabled) BOOL localPresenceDebugBulletinEnabled;
@property (readonly, getter=isCheckAdaptiveTemperatureAutomationsMFiCapabilityEnabled) BOOL checkAdaptiveTemperatureAutomationsMFiCapabilityEnabled;
@property (readonly, getter=isCheckCleanEnergyAutomationMFiCapabilityEnabled) BOOL checkCleanEnergyAutomationMFiCapabilityEnabled;
@property (readonly, getter=isWakeOnLanV2Enabled) BOOL wakeOnLanV2Enabled;
@property (readonly, getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled;
@property (readonly, getter=isHH2MigrationDryRunEnabled) BOOL hh2MigrationDryRunEnabled;
@property (readonly, getter=isSHADEREnabled) BOOL SHADEREnabled;
@property (readonly, getter=isSHADERMercuryEnabled) BOOL SHADERMercuryEnabled;
@property (readonly, getter=isDemoModeV2Enabled) BOOL demoModeV2Enabled;
@property (readonly, getter=isStereoOdeonTTSUBypassingPrimaryEnabled) BOOL stereoOdeonTTSUBypassingPrimaryEnabled;
@property (readonly, getter=isNetworkDiagnosticsEnabled) BOOL networkDiagnosticsEnabled;
@property (readonly, getter=isRapportOverBLEEnabled) BOOL rapportOverBLEEnabled;
@property (readonly, getter=isCommunicationTrustInvitationsEnabled) BOOL communicationTrustInvitationsEnabled;
@property (readonly, getter=isWifiPickerApiEnabled) BOOL wifiPickerApiEnabled;
@property (readonly, getter=isTransportRetryEnabled) BOOL transportRetryEnabled;
@property (readonly, getter=isWiFiRepairV2Enabled) BOOL wifiRepairV2Enabled;
@property (readonly, getter=isBlockHomeInvitationInHH1Enabled) BOOL homeInvitationDisabledInHH1;
@property (readonly, getter=isMediaPrivilegeEnabled) BOOL mediaPrivilegeEnabled;
@property (readonly, getter=isHKSV3Enabled) BOOL HKSV3Enabled;
@property (readonly) int productType;
@property (readonly, getter=isStatusChannelOnDedicateTopicEnabled) BOOL statusChannelOnDedicateTopicEnabled;
@property (readonly, getter=isHomeTheaterSubSecondEnabled) BOOL homeTheaterSubSecondEnabled;
@property (readonly, getter=isOnDemandLoadingLocalStoreEnabled) BOOL onDemandLoadingLocalStoreEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
