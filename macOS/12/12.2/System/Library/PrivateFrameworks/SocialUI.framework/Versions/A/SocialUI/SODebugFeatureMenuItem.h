@class NSString;

@interface SODebugFeatureMenuItem : SODebugMenuItem

@property (readonly, copy) NSString *userDefaultsKey;
@property (nonatomic, getter=isFeatureEnabled) BOOL featureEnabled;

- (void).cxx_destruct;
- (void)update;
- (void)handleMenuAction:(id)a0;
- (id)initWithUserDefaultsKey:(id)a0 title:(id)a1;
- (void)featureEnabled:(BOOL)a0;

@end
