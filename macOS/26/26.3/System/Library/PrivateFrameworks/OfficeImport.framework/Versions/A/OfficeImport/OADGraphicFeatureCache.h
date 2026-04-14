@class NSMutableArray, OITSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject {
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)cacheFeature:(id)a0;
- (id)countedFeatureAtIndex:(unsigned long long)a0;
- (id)featuresSortedByUsageCount;

@end
