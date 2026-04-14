@class NSArray;

@interface SACurrentDisplayRouteClientState : SAAceClientState

@property (copy, nonatomic) NSArray *activeDisplayRoutes;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)currentDisplayRouteClientState;
+ (id)currentDisplayRouteClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
