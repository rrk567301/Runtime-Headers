@class NSDictionary;

@interface BKSKeyboardDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSDictionary *modifierKeyRemapping;
@property (retain, nonatomic) NSDictionary *oldModifierKeyRemapping;

- (void)migrateIfNeeded;
- (id)init;
- (void)_bindAndRegisterDefaults;

@end
