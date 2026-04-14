@class NSArray;

@interface SAUIPluginSnippetPrewarm : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *uiPluginBundleNames;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
