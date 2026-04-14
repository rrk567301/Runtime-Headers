@class JSValue;

@interface AppStoreComponentsDaemonKit.JSAppDistributionObject : NSObject <_TtP27AppStoreComponentsDaemonKitP33_2C17C6E5FED897B224F6F908E89E099930JSAppDistributionObjectExports_> {
    void /* unknown type, empty encoding */ appDistribution;
}

@property (nonatomic, readonly) JSValue *distributorPriorityList;

- (id)init;
- (void).cxx_destruct;
- (id)appAvailabilityWithDistributorToAppIds:(id)a0;
- (BOOL)isAppDistributionEligibleForCurrentDevice:(id)a0;

@end
