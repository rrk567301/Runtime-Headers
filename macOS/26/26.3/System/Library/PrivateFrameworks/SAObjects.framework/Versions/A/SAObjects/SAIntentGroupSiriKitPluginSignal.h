@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)mutatingCommand;

@end
