@interface IRFeatureFlags : NSObject

@property (readonly, nonatomic, getter=isServiceFeatureEnabled) char serviceFeatureEnabled;
@property (readonly, nonatomic, getter=isPickerPrioritizationFeatureEnabled) char pickerPrioritizationFeatureEnabled;
@property (readonly, nonatomic, getter=isSuggestedRoutingFeatureEnabled) char suggestedRoutingFeatureEnabled;
@property (readonly, nonatomic, getter=isAutomaticRoutingFeatureEnabled) char automaticRoutingFeatureEnabled;
@property (readonly, nonatomic, getter=isSuggestedControlFeatureEnabled) char suggestedControlFeatureEnabled;
@property (readonly, nonatomic, getter=isAutomaticControlFeatureEnabled) char automaticControlFeatureEnabled;
@property (readonly, nonatomic, getter=isTVRemoteControlFeatureEnabled) char tvRemoteControlFeatureEnabled;
@property (readonly, nonatomic, getter=isAggressiveFilteringEnabled) char aggressiveFilteringEnabled;

+ (id)sharedFeatureFlags;

- (void)_checkForUnitTestingWithFeatureName:(id)a0;

@end
