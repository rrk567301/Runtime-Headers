@interface SAUIPaginateList : SABaseClientBoundCommand

@property (nonatomic) char forward;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
