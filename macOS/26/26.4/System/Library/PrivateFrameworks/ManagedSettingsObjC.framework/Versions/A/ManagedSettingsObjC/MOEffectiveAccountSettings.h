@class MOEffectiveBool, MOEffectiveSettingsStore;

@interface MOEffectiveAccountSettings : NSObject

@property (readonly) MOEffectiveSettingsStore *store;
@property (readonly) MOEffectiveBool *denyiCloudLogout;

- (void).cxx_destruct;
- (id)init;

@end
