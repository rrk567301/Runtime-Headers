@interface SAAXSkipBack : SADomainCommand

+ (id)skipBack;
+ (id)skipBackWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
