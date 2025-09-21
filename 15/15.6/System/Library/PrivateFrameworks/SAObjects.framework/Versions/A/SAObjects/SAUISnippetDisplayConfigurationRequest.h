@interface SAUISnippetDisplayConfigurationRequest : SABaseClientBoundCommand

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
