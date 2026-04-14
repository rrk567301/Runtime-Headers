@interface SAUISnippetDisplayConfigurationRequest : SABaseClientBoundCommand

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
