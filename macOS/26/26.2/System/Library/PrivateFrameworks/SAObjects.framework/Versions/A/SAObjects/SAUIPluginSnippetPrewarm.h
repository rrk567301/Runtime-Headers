@class NSArray;

@interface SAUIPluginSnippetPrewarm : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *uiPluginBundleNames;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
