@interface SCRCUserDefaultsRegistry : SCRCUserDefaultsBase

+ (void)initialize;
+ (void)_buildCustomCommonDomains;
+ (void)_buildOutputConfigurationKeys;
+ (id)_voiceIdentifierKey:(id)a0 category:(id)a1;
+ (id)keysToExcludeFromExport;
+ (id)profileKeysWithMask:(long long)a0;

- (id)valueForKey:(id)a0;
- (id)common;
- (id)local;
- (id)registry;
- (BOOL)isCustomCommonDomain:(id)a0;
- (id)keyForDomain:(id)a0;
- (id)loginGreeting;
- (id)outputConfigurationKeysForCategory:(id)a0;

@end
