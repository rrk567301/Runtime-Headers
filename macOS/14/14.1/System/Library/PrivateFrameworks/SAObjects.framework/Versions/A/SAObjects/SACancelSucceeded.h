@interface SACancelSucceeded : SABaseClientBoundCommand

+ (id)cancelSucceeded;
+ (id)cancelSucceededWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
