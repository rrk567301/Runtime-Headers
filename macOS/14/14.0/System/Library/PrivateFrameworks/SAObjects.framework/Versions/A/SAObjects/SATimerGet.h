@interface SATimerGet : SADomainCommand

+ (id)get;
+ (id)getWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
