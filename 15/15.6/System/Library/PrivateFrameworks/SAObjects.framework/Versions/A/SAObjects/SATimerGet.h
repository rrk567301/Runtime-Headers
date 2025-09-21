@interface SATimerGet : SADomainCommand

+ (id)get;
+ (id)getWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (char)requiresResponse;
- (char)mutatingCommand;
- (id)encodedClassName;

@end
