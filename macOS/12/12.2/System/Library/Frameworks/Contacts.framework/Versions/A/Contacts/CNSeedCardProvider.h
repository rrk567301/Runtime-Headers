@interface CNSeedCardProvider : NSObject

+ (id)nearestAvailableDataForCountryCode:(id)a0;
+ (id)dataForEveryCountry;
+ (id)dataForCountryCode:(id)a0;
+ (id)bundleWithSeedCards;

@end
