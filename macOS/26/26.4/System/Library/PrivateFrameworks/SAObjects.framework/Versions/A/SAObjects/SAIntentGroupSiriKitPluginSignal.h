@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (BOOL)requiresResponse;
- (id)initWithBundleIdentifier:(id)a0;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
