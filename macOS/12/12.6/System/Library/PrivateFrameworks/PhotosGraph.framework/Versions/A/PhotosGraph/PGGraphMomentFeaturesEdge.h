@class NSString;

@interface PGGraphMomentFeaturesEdge : PGGraphOptimizedEdge {
    NSString *_allAssetUUIDs;
    unsigned int _numberOfRelevantAssets : 32;
}

+ (id)filter;
+ (id)relevantAssetUUIDsFromAllAssetUUIDs:(id)a0;

- (unsigned short)domain;
- (void).cxx_destruct;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)propertyDictionary;
- (id)initFromMomentNode:(id)a0 toFeatureNode:(id)a1 numberOfRelevantAssets:(unsigned long long)a2 allAssetUUIDs:(id)a3;
- (id)initFromMomentNode:(id)a0 toFeatureNode:(id)a1 numberOfRelevantAssets:(unsigned long long)a2 relevantAssetUUIDs:(id)a3;

@end
