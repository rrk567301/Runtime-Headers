@interface CNSeedCardProvider : NSObject

+ (id)dataForEveryCountry;
+ (id)nearestAvailableDataForCountryCode:(id)a0;
+ (id)dataForCountryCode:(id)a0;
+ (id)bundleWithSeedCards;

@end
