@interface SAMPSetState : SADomainCommand

@property (nonatomic) int state;

+ (id)setState;
+ (id)setStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
