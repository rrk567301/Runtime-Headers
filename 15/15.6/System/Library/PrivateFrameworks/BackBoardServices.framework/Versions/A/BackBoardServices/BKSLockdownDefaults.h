@interface BKSLockdownDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) char tetheredDisplayPortMode;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
