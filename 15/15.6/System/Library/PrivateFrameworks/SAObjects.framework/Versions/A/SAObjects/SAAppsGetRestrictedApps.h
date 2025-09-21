@class NSArray, NSString;

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appIds;
@property (copy, nonatomic) NSString *executionEnvironment;

+ (id)getRestrictedApps;
+ (id)getRestrictedAppsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
