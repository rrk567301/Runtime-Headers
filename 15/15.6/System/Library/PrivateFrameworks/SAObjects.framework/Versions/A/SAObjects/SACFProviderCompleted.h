@interface SACFProviderCompleted : SACFAbstractClientCommandCompleted

+ (id)providerCompleted;
+ (id)providerCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (id)encodedClassName;

@end
