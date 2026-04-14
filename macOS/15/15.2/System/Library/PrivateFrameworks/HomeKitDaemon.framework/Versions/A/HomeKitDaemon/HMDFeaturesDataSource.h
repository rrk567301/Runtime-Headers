@class NSString;

@interface HMDFeaturesDataSource : NSObject <HMDFeaturesDataSource>

@property (readonly, getter=isPersistentBulletinRegistrationsFeatureEnabled) BOOL persistentBulletinRegistrationsFeatureEnabled;
@property (readonly, getter=isUserActivityStateDetectionFeatureEnabled) BOOL userActivityStateDetectionFeatureEnabled;
@property (readonly, getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled;
@property (readonly, getter=isHH2MigrationDryRunEnabled) BOOL hh2MigrationDryRunEnabled;
@property (readonly, getter=isNativeMatterEnabled) BOOL nativeMatterEnabled;
@property (readonly, getter=isRVCEnabled) BOOL RVCEnabled;
@property (readonly, getter=isSHADEREnabled) BOOL SHADEREnabled;
@property (readonly, getter=isSHADERMercuryEnabled) BOOL SHADERMercuryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultDataSource;

- (BOOL)isResidentSelectionEnabledForHomeUUID:(id)a0;

@end
