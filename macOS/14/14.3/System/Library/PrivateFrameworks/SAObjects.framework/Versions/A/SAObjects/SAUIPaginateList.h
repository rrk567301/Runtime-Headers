@interface SAUIPaginateList : SABaseClientBoundCommand

@property (nonatomic) BOOL forward;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
