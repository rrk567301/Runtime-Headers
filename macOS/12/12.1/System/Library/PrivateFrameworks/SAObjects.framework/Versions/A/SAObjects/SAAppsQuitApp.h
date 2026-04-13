@class NSString;

@interface SAAppsQuitApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *sceneId;

+ (id)quitApp;
+ (id)quitAppWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
