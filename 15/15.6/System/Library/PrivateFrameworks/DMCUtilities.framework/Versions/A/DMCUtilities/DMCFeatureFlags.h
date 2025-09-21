@interface DMCFeatureFlags : NSObject

@property (class, readonly, nonatomic, getter=isAppDistributionPVEnabled) char AppDistributionPVEnabled;
@property (class, readonly, nonatomic, getter=isDEPPushEnabled) char DEPPushEnabled;
@property (class, readonly, nonatomic, getter=isHRNEnabled) char HRNEnabled;
@property (class, readonly, nonatomic, getter=isMDACoResidencyEnabled) char MDACoResidencyEnabled;
@property (class, readonly, nonatomic, getter=isMDAMDMManagedEnabled) char MDAMDMManagedEnabled;
@property (class, readonly, nonatomic, getter=isMDMMigrationEnabled) char MDMMigrationEnabled;
@property (class, readonly, nonatomic, getter=isSetDefaultCallingAndMessagingAppsEnabled) char SetDefaultCallingAndMessagingAppsEnabled;
@property (class, readonly, nonatomic, getter=isVisionMDMEnabled) char VisionMDMEnabled;
@property (class, readonly, nonatomic, getter=isVisionProfileEnrollEnabled) char VisionProfileEnrollEnabled;
@property (class, readonly, nonatomic, getter=isWellKnownDiscoveryEnabled) char WellKnownDiscoveryEnabled;
@property (class, readonly, nonatomic, getter=isAppleInternal) char appleInternal;
@property (class, readonly, nonatomic, getter=hasT2) char hasT2;

@end
