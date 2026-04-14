@class NSMutableDictionary;

@interface CHIPPluginDeviceTopology : HMFObject

@property (retain, nonatomic) NSMutableDictionary *hapServiceTypes;
@property (retain, nonatomic) NSMutableDictionary *clustersInUse;
@property (retain, nonatomic) NSMutableDictionary *hapCategories;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)initWithNodeId:(id)a0 storage:(id)a1;
- (id)initWithTopologyDictionary:(id)a0;
- (id)getHAPServiceTypesAtEndpoint:(id)a0;
- (id)getClustersInUseAtEndpoint:(id)a0;
- (id)getHAPCategoriesAtEndpoint:(id)a0;

@end
