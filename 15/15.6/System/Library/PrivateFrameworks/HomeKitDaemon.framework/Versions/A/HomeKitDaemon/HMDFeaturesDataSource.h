@class NSString;

@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>

@property (class, readonly, nonatomic) HMDFeaturesDataSource *defaultDataSource;

@property (readonly, getter=isPersistentBulletinRegistrationsFeatureEnabled) char persistentBulletinRegistrationsFeatureEnabled;
@property (readonly, getter=isUserActivityStateDetectionFeatureEnabled) char userActivityStateDetectionFeatureEnabled;
@property (readonly, getter=isHH2AutoMigrationEnabled) char hh2AutoMigrationEnabled;
@property (readonly, getter=isHH2MigrationDryRunEnabled) char hh2MigrationDryRunEnabled;
@property (readonly, getter=isNativeMatterEnabled) char nativeMatterEnabled;
@property (readonly, getter=isRVCEnabled) char RVCEnabled;
@property (readonly, getter=isMatterPincodesEnabled) char matterPincodesEnabled;
@property (readonly, getter=isMatterTTUEnabled) char matterTTUEnabled;
@property (readonly, getter=isSHADEREnabled) char SHADEREnabled;
@property (readonly, getter=isSHADERMercuryEnabled) char SHADERMercuryEnabled;
@property (readonly, getter=isDemoModeV2Enabled) char demoModeV2Enabled;
@property (readonly, getter=isStereoOdeonTTSUBypassingPrimaryEnabled) char stereoOdeonTTSUBypassingPrimaryEnabled;
@property (readonly, getter=isRapportOverBLEEnabled) char rapportOverBLEEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isResidentSelectionEnabledForHomeUUID:(id)a0;

@end
