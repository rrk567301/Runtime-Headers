@class NSMutableArray, OITSUNoCopyDictionary;

@interface OADGraphicFeatureCache : NSObject {
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)cacheFeature:(id)a0;
- (id)countedFeatureAtIndex:(unsigned long long)a0;
- (id)featuresSortedByUsageCount;

@end
