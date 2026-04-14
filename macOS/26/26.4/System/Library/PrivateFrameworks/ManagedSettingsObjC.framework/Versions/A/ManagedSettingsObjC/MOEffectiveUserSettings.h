@class MOEffectiveString, MOEffectiveSettingsStore;

@interface MOEffectiveUserSettings : NSObject

@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveString *sharingPolicy;

- (void).cxx_destruct;
- (id)init;

@end
