@class MOEffectiveOptionalApplication, MOEffectiveSettingsStore;

@interface MOEffectiveAllowedClientSettings : NSObject

@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveOptionalApplication *allowedClient;

- (void).cxx_destruct;
- (id)init;

@end
