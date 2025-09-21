@interface SARollbackSucceeded : SABaseClientBoundCommand

+ (id)rollbackSucceeded;
+ (id)rollbackSucceededWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
