@interface SAUISuppressDelayFeedback : SABaseClientBoundCommand

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
