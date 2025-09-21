@interface SAFmfVisibilityStateSet : SADomainCommand

@property (nonatomic) char visible;

+ (id)visibilityStateSet;
+ (id)visibilityStateSetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
