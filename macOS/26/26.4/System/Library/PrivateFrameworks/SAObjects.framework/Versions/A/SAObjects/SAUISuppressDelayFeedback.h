@interface SAUISuppressDelayFeedback : SABaseClientBoundCommand

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
