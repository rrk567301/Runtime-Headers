@interface SAUISetUpdateMask : SABaseClientBoundCommand

@property (nonatomic) BOOL shouldHideSiri;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
