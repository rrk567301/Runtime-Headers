@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0;
- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
