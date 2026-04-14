@interface FedStatsUtils : NSObject

+ (id)SHA1AsBitString:(id)a0;
+ (id)bitStringToInt:(id)a0;
+ (id)getDeviceRegion;
+ (id)subsampleBooleanValue:(id)a0 samplingRateTrue:(id)a1 samplingRateFalse:(id)a2 error:(id *)a3;
+ (BOOL)checkDeviceRegionCodeRestrictionForAllowedRegions:(id)a0 deniedRegions:(id)a1;
+ (id)intToBitString:(unsigned long long)a0 withLength:(unsigned long long)a1;
+ (BOOL)isNaturalLanguageAvailable;
+ (BOOL)isThirdPartyAllowedUseCaseID:(id)a0;
+ (id)tokenizeSentence:(id)a0 removePunctuation:(BOOL)a1 tokenizePerson:(BOOL)a2 tokenizeLocation:(BOOL)a3 tokenizeNumber:(BOOL)a4 action:(long long)a5;
+ (id)transformUseCaseID:(id)a0;

@end
