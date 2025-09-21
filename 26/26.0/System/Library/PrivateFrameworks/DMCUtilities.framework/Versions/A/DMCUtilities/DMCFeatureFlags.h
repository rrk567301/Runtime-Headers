@interface DMCFeatureFlags : NSObject

@property (class, readonly, nonatomic, getter=isAppDistributionPVEnabled) BOOL AppDistributionPVEnabled;
@property (class, readonly, nonatomic, getter=isHRNEnabled) BOOL HRNEnabled;
@property (class, readonly, nonatomic, getter=isMDACoResidencyEnabled) BOOL MDACoResidencyEnabled;
@property (class, readonly, nonatomic, getter=isMDAMDMManagedEnabled) BOOL MDAMDMManagedEnabled;
@property (class, readonly, nonatomic, getter=isMDMMigrationEnabled) BOOL MDMMigrationEnabled;
@property (class, readonly, nonatomic, getter=isMigrationEligibilityReportEnabled) BOOL MigrationEligibilityReportEnabled;
@property (class, readonly, nonatomic, getter=isRRTSEnabled) BOOL RRTSEnabled;
@property (class, readonly, nonatomic, getter=isRRTSMDMTimeoutEnabled) BOOL RRTSMDMTimeoutEnabled;
@property (class, readonly, nonatomic, getter=isRRTSUEATimeoutEnabled) BOOL RRTSUEATimeoutEnabled;
@property (class, readonly, nonatomic, getter=isSetDefaultCallingAndMessagingAppsEnabled) BOOL SetDefaultCallingAndMessagingAppsEnabled;
@property (class, readonly, nonatomic, getter=isVisionMDMEnabled) BOOL VisionMDMEnabled;
@property (class, readonly, nonatomic, getter=isVisionProfileEnrollEnabled) BOOL VisionProfileEnrollEnabled;
@property (class, readonly, nonatomic, getter=isWellKnownDiscoveryEnabled) BOOL WellKnownDiscoveryEnabled;
@property (class, readonly, nonatomic, getter=isAppleInternal) BOOL appleInternal;
@property (class, readonly, nonatomic, getter=hasT2) BOOL hasT2;

@end
