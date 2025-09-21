@interface WFSpotlightSettingsClient : NSObject

@property (class, nonatomic, readonly) WFSpotlightSettingsClient *shared;

- (id)init;
- (void).cxx_destruct;
- (char)isSpotlightEnabledForBundleIdentifier:(id)a0;

@end
