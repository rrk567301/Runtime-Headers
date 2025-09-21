@interface SAUISetUpdateMask : SABaseClientBoundCommand

@property (nonatomic) char shouldHideSiri;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
