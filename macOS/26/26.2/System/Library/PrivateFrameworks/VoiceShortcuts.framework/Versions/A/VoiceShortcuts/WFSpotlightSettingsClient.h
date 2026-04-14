@interface WFSpotlightSettingsClient : NSObject

@property (class, nonatomic, readonly) WFSpotlightSettingsClient *shared;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isSpotlightEnabledForBundleIdentifier:(id)a0;

@end
