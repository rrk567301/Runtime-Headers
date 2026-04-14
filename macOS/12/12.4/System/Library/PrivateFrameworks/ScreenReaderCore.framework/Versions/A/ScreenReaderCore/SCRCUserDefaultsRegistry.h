@interface SCRCUserDefaultsRegistry : SCRCUserDefaultsBase

+ (void)initialize;
+ (id)profileKeysWithMask:(long long)a0;
+ (void)_buildOutputConfigurationKeys;
+ (void)_buildCustomCommonDomains;

- (id)valueForKey:(id)a0;
- (id)common;
- (id)local;
- (id)registry;
- (id)keyForDomain:(id)a0;
- (BOOL)isCustomCommonDomain:(id)a0;
- (id)loginGreeting;
- (id)outputConfigurationKeysForCategory:(id)a0;

@end
