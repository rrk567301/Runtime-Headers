@class NSArray;

@interface SAUIPluginSnippetPrewarm : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *uiPluginBundleNames;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
