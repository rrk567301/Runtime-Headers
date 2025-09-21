@interface PLSeasonsUtilities : NSObject

+ (unsigned long long)_northernMeteorologicalSeasonForMonthNumber:(unsigned long long)a0;
+ (id)_seasonCountryCodesDictionary;
+ (unsigned long long)_seasonForMonthNumber:(unsigned long long)a0 locale:(id)a1;
+ (unsigned long long)_southernMeteorologicalSeasonForMonthNumber:(unsigned long long)a0;
+ (char)isCountryCodePartOfNorthernHemisphere:(id)a0;
+ (char)isCountryCodePartOfSouthernHemisphere:(id)a0;

@end
