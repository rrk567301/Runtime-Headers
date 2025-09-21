@class NSString;

@interface SAIntentGroupLaunchAppWithUserActivity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *userActivityIdentifier;

+ (id)launchAppWithUserActivity;
+ (id)launchAppWithUserActivityWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
