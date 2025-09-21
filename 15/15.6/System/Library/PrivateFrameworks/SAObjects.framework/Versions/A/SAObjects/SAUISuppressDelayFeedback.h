@interface SAUISuppressDelayFeedback : SABaseClientBoundCommand

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
