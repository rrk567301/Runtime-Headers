@interface DDSMobileAssetv1PredicateAdapter : NSObject

+ (id)predicateForAssetQuery:(id)a0 compatiblilityVersion:(unsigned long long)a1;
+ (id)predicateForQuery:(id)a0 compatibilityVersion:(unsigned long long)a1 internalInstall:(BOOL)a2;
+ (id)extractRegionDictFromFilter:(id)a0;
+ (id)regionKeys;
+ (id)compatibilityPredicateForCompatabilityVersion:(unsigned long long)a0 internalInstall:(BOOL)a1;
+ (id)predicateForKey:(id)a0 matchingString:(id)a1;
+ (id)predicateForKey:(id)a0 matchingAnyStringIn:(id)a1;
+ (id)predicateForKey:(id)a0 matchingAnyDictionaryIn:(id)a1 acceptUnspecifiedValue:(BOOL)a2 acceptUnspecifiedAttribute:(BOOL)a3 lenientMatch:(BOOL)a4;

@end
