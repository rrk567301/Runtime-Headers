@interface SACancelSucceeded : SABaseClientBoundCommand

+ (id)cancelSucceeded;
+ (id)cancelSucceededWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
