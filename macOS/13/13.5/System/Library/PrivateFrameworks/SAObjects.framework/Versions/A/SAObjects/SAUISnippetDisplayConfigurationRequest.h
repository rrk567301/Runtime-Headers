@interface SAUISnippetDisplayConfigurationRequest : SABaseClientBoundCommand

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
