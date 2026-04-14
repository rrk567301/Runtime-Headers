@interface SCRCUserDefaultsRegistry : SCRCUserDefaultsBase

+ (void)initialize;
+ (void)_buildOutputConfigurationKeys;
+ (void)_buildCustomCommonDomains;
+ (id)profileKeysWithMask:(long long)a0;

- (id)valueForKey:(id)a0;
- (id)common;
- (id)local;
- (id)registry;
- (id)loginGreeting;
- (id)outputConfigurationKeysForCategory:(id)a0;
- (BOOL)isCustomCommonDomain:(id)a0;
- (id)keyForDomain:(id)a0;

@end
