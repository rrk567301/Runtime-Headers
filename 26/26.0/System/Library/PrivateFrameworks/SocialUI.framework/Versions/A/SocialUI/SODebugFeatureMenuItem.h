@class NSString;

@interface SODebugFeatureMenuItem : SODebugMenuItem

@property (readonly, copy) NSString *userDefaultsKey;
@property (nonatomic, getter=isFeatureEnabled) BOOL featureEnabled;

- (void)update;
- (void).cxx_destruct;
- (void)featureEnabled:(BOOL)a0;
- (void)handleMenuAction:(id)a0;
- (id)initWithUserDefaultsKey:(id)a0 title:(id)a1;

@end
