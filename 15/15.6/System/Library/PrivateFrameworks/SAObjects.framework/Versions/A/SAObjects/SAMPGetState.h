@interface SAMPGetState : SADomainCommand

+ (id)getStateWithDictionary:(id)a0 context:(id)a1;
+ (id)getState;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
