@interface STSystemStatusDefaults : BSAbstractDefaultDomain

@property (nonatomic) char shouldEnableInternalBundles;
@property (nonatomic) char shouldEnableUnknownBundles;
@property (nonatomic) char shouldEnableUnknownBackgroundActivities;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
