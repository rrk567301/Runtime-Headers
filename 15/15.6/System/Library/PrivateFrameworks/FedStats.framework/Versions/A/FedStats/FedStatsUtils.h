@interface FedStatsUtils : NSObject

+ (id)SHA1AsBitString:(id)a0;
+ (id)bitStringToInt:(id)a0;
+ (id)subsampleBooleanValue:(id)a0 samplingRateTrue:(id)a1 samplingRateFalse:(id)a2 error:(id *)a3;
+ (id)getDeviceRegion;
+ (id)normL2:(id)a0;
+ (char)checkDeviceOSVersionFilter:(id)a0;
+ (char)checkDeviceOSVersionFilter:(id)a0 systemVersion:(id)a1;
+ (char)checkDeviceRegionCodeRestrictionForAllowedRegions:(id)a0 deniedRegions:(id)a1;
+ (id)intToBitString:(unsigned long long)a0 withLength:(unsigned long long)a1;
+ (char)isNaturalLanguageAvailable;
+ (char)isThirdPartyAllowedUseCaseID:(id)a0;
+ (id)tokenizeSentence:(id)a0 removePunctuation:(char)a1 tokenizePerson:(char)a2 tokenizeLocation:(char)a3 tokenizeNumber:(char)a4 action:(long long)a5;
+ (id)transformUseCaseID:(id)a0;

@end
