@class NSDictionary;

@interface SALanguageSettings : SABaseClientBoundCommand

@property (copy, nonatomic) NSDictionary *configuredLocales;

+ (id)languageSettings;
+ (id)languageSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
