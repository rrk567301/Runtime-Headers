@interface ASAssetMetadataUpdatePolicy : NSObject

+ (id)policy;

- (id)_stringPreferenceValueForKey:(id)a0;
- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateError:(id)a2;
- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateInterval:(double)a2;
- (double)defaultNetworkTimeout;
- (BOOL)usesAppleInternalServerForAssetType:(id)a0;
- (double)automaticMetadataUpdateIntervalForAssetType:(id)a0;
- (id)getSystemAppURL:(id)a0 assetType:(id)a1;
- (char *)actualTrainName;
- (char *)syntheticTrainName;
- (id)serverURLForAssetType:(id)a0;
- (id)serverURLOverrideForAssetType:(id)a0;

@end
