@class NSString, NSArray;

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationClientIdentifier;
@property (nonatomic) BOOL doNotDismissSiri;
@property (copy, nonatomic) NSString *executionEnvironment;
@property (copy, nonatomic) NSString *iCloudAltDSID;
@property (copy, nonatomic) NSString *launchId;
@property (copy, nonatomic) NSArray *options;
@property (copy, nonatomic) NSString *personaAccessLevel;
@property (copy, nonatomic) NSString *personaId;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
