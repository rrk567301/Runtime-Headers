@class NSMutableDictionary;

@interface CHIPPluginDeviceTopology : HMFObject

@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;
@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics;
@property (retain, nonatomic) NSMutableDictionary *deviceFeatureMapValues;
@property (retain, nonatomic) NSMutableDictionary *deviceAttributeValues;
@property (retain, nonatomic) NSMutableDictionary *nodeLabels;
@property (retain, nonatomic) NSMutableDictionary *partsList;
@property (retain, nonatomic) NSMutableDictionary *fixedLabels;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)initWithNodeId:(id)a0 server:(id)a1;
- (id)initWithTopologyDictionary:(id)a0;
- (id)getHAPServiceTypesAtEndpoint:(id)a0;
- (id)getClustersInUseAtEndpoint:(id)a0;
- (id)getHAPCategoriesAtEndpoint:(id)a0;
- (id)getBridgeAggregateNodeEndpoint;
- (id)getEndpoints;
- (BOOL)isHAPCharacteristicDisabledAtEndpoint:(id)a0 hapServiceType:(id)a1 hapCharacteristic:(id)a2;
- (id)getFeatureMapForClusterClassName:(id)a0 endpoint:(id)a1;
- (id)getAttributesForClusterClassName:(id)a0 endpoint:(id)a1;
- (id)getNodeLabelAtEndpoint:(id)a0;
- (id)getPartsListAtEndpoint:(id)a0;
- (id)getFixedLabelsAtEndpoint:(id)a0;

@end
