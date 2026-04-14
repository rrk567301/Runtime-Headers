@class NSArray;

@interface SAUIPluginSnippetPrewarm : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *uiPluginBundleNames;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
