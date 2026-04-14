@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSString *environment;

+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)geoClientState;
+ (id)geoClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
