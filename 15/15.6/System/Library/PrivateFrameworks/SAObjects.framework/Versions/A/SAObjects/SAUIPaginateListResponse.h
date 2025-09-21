@interface SAUIPaginateListResponse : SABaseClientBoundCommand

@property (nonatomic) long long firstItemIndex;
@property (nonatomic) long long focusedItemIndex;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
