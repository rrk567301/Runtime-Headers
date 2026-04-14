@class NSMutableDictionary;

@interface CHIPPluginDeviceTopology : HMFObject

@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;
@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;
@property (retain, nonatomic) NSMutableDictionary *hapDisabledCharacteristics;
@property (retain, nonatomic) NSMutableDictionary *deviceFeatureMapValues;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)initWithNodeId:(id)a0 storage:(id)a1;
- (id)initWithTopologyDictionary:(id)a0;
- (id)getHAPServiceTypesAtEndpoint:(id)a0;
- (id)getClustersInUseAtEndpoint:(id)a0;
- (id)getHAPCategoriesAtEndpoint:(id)a0;
- (id)getEndpoints;
- (BOOL)isHAPCharacteristicDisabledAtEndpoint:(id)a0 hapServiceType:(id)a1 hapCharacteristic:(id)a2;
- (id)getFeatureMapForClusterClassName:(id)a0 endpoint:(id)a1;

@end
