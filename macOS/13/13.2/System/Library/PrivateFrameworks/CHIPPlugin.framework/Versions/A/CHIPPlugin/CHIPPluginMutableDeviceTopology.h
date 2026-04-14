@class NSMutableDictionary;

@interface CHIPPluginMutableDeviceTopology : CHIPPluginDeviceTopology

@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;
@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics;
@property (retain, nonatomic) NSMutableDictionary *deviceFeatureMapValues;
@property (retain, nonatomic) NSMutableDictionary *deviceAttributeValues;
@property (retain, nonatomic) NSMutableDictionary *nodeLabels;
@property (retain, nonatomic) NSMutableDictionary *partsList;
@property (retain, nonatomic) NSMutableDictionary *fixedLabels;
@property (retain, nonatomic) NSMutableDictionary *versions;

- (void)setHAPServiceTypes:(id)a0 atEndpoint:(id)a1;
- (void)setClustersInUse:(id)a0 atEndpoint:(id)a1;
- (void)setHAPCategories:(id)a0 atEndpoint:(id)a1;
- (void)setHAPDisabledCharacteristics:(id)a0 atEndpoint:(id)a1;
- (void)setDeviceFeatureMapValues:(id)a0 atEndpoint:(id)a1;
- (void)setDeviceAttributeValues:(id)a0 atEndpoint:(id)a1;
- (void)addHAPDisabledCharacteristic:(id)a0 atEndpoint:(id)a1 hapServiceType:(id)a2;
- (void)addDeviceFeatureMapValue:(id)a0 clusterClassName:(id)a1 atEndpoint:(id)a2;
- (void)addDeviceAttributeValue:(id)a0 clusterClassName:(id)a1 attributeName:(id)a2 atEndpoint:(id)a3;
- (void)setNodeLabel:(id)a0 atEndpoint:(id)a1;
- (void)setPartsList:(id)a0 atEndpoint:(id)a1;
- (void)setFixedLabels:(id)a0 atEndpoint:(id)a1;
- (void)setVersion:(id)a0 for:(id)a1;
- (id)storeForNodeId:(id)a0 server:(id)a1;

@end
