@interface SCRCUserDefaultsRegistry : SCRCUserDefaultsBase

+ (void)initialize;
+ (id)systemLanguageID;
+ (void)_buildCustomCommonDomains;
+ (void)_buildOutputConfigurationKeys;
+ (id)keysToExcludeFromExport;
+ (id)profileKeysWithMask:(long long)a0;
+ (id)voiceIdentifierKey:(id)a0 category:(id)a1;

- (id)registry;
- (id)common;
- (id)local;
- (id)valueForKey:(id)a0;
- (BOOL)isCustomCommonDomain:(id)a0;
- (id)keyForDomain:(id)a0;
- (id)loginGreeting;
- (id)outputConfigurationKeysForCategory:(id)a0;

@end
