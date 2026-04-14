@interface FedStatsUtils : NSObject

+ (id)SHA1AsBitString:(id)a0;
+ (id)bitStringToInt:(id)a0;
+ (BOOL)checkDeviceRegionCodeRestrictionForAllowedRegions:(id)a0 deniedRegions:(id)a1;
+ (id)intToBitString:(unsigned long long)a0 withLength:(unsigned long long)a1;
+ (id)tokenizeAndSampleUnigramFromNgram:(id)a0;

@end
