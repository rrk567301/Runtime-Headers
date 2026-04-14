@interface SAMPGetState : SADomainCommand

+ (id)getStateWithDictionary:(id)a0 context:(id)a1;
+ (id)getState;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
