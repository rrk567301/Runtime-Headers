@interface HKECGAvailabilityResult : NSObject

@property (readonly, nonatomic) char advertiseDirectOnboarding;
@property (readonly, nonatomic) char advertiseDirectOnboardingEscapeHatch;
@property (readonly, nonatomic) char advertiseUpgrade;
@property (readonly, nonatomic) char advertiseUpgradeEscapeHatch;
@property (readonly, nonatomic) char advertiseUpgradeBackgroundDelivered;

+ (id)resultWithAdvertiseDirectOnboarding:(char)a0 advertiseDirectOnboardingSecondary:(char)a1 advertiseUpgrade:(char)a2 advertiseUpgradeSecondary:(char)a3 advertiseUpgradeBackgroundDelivered:(char)a4;
+ (id)resultWithNoAdvertisements;

- (id)initWithAdvertiseDirectOnboarding:(char)a0 advertiseDirectOnboardingSecondary:(char)a1 advertiseUpgrade:(char)a2 advertiseUpgradeSecondary:(char)a3 advertiseUpgradeBackgroundDelivered:(char)a4;

@end
