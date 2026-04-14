@class NSMutableDictionary;

@interface CHIPPluginMutableDeviceTopology : CHIPPluginDeviceTopology

@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;
@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;

- (void)setHAPServiceTypes:(id)a0 atEndpoint:(id)a1;
- (void)setClustersInUse:(id)a0 atEndpoint:(id)a1;
- (void)setHAPCategories:(id)a0 atEndpoint:(id)a1;
- (id)storeForNodeId:(id)a0 storage:(id)a1;

@end
