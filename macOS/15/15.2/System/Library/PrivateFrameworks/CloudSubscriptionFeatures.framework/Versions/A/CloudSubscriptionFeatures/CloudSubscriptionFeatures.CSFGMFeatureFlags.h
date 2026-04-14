@interface CloudSubscriptionFeatures.CSFGMFeatureFlags : NSObject

@property (class, nonatomic, readonly) BOOL anyFeatureEnabled;

- (id)init;

@end
