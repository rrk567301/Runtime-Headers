@interface SAAceClientState : SADomainObject

+ (id)aceClientState;
+ (id)aceClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)deliveryDeadline;
+ (id)persistencePolicy;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
