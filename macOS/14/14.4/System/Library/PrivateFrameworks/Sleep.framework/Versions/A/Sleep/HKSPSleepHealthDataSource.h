@class HKSPSleepStore, HKProfileIdentifier, NSString;
@protocol HKFeatureAvailabilityHealthDataSource;

@interface HKSPSleepHealthDataSource : NSObject <HKFeatureAvailabilityHealthDataSource>

@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> strongHealthDataSource;
@property (readonly, nonatomic) HKSPSleepStore *sleepStore;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> healthDataSource;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)featureAvailabilityProvidingForFeatureIdentifier:(id)a0;
- (id)requirementSatisfactionOverridesDataSource;
- (id)watchLowPowerModeDataSource;
- (id)wristDetectionSettingManager;
- (id)initWithSleepStore:(id)a0 healthDataSource:(id)a1;

@end
