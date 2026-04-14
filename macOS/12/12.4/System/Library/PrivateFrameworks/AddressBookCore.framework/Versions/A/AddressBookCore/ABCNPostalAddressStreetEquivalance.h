@interface ABCNPostalAddressStreetEquivalance : NSObject

+ (BOOL)isStreetAddress:(id)a0 equivalentToStreetAddress:(id)a1;
+ (id)normalizeAddress:(id)a0;
+ (id)prepareStringForNormalization:(id)a0;
+ (id)normalizeComponent:(id)a0;
+ (id)normalizationMap;
+ (id)_normalizationMap;

@end
