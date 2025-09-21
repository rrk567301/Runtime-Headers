@class MTRDeviceController, NSArray, NSSet, NSMutableSet, NSNumber, NSMutableArray;

@interface MTRServerEndpoint : NSObject {
    NSMutableSet *_accessGrants;
    NSMutableArray *_serverClusters;
    MTRDeviceController *_deviceController;
    struct unique_ptr<EmberAfCluster[], std::default_delete<EmberAfCluster[]>> { struct EmberAfCluster *__ptr_; } _matterClusterMetadata;
    struct { struct EmberAfCluster *cluster; unsigned char clusterCount; unsigned short endpointSize; } _matterEndpointMetadata;
    struct unique_ptr<chip::app::DataModel::DeviceTypeEntry[], std::default_delete<chip::app::DataModel::DeviceTypeEntry[]>> { struct DeviceTypeEntry *__ptr_; } _matterDeviceTypes;
    struct unique_ptr<unsigned int[], std::default_delete<unsigned int[]>> { unsigned int *__ptr_; } _matterDataVersions;
    NSSet *_matterAccessGrants;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _endpointIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSArray *matterAccessGrants;
@property (readonly, copy) NSNumber *endpointID;
@property (readonly, copy) NSArray *deviceTypes;
@property (readonly, copy) NSArray *accessGrants;
@property (readonly, copy) NSArray *serverClusters;

+ (id)rootNodeEndpoint;

- (void)invalidate;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEndpointID:(id)a0 deviceTypes:(id)a1;
- (void)addAccessGrant:(id)a0;
- (BOOL)addServerCluster:(id)a0;
- (BOOL)associateWithController:(id)a0;
- (id)matterAccessGrantsForCluster:(id)a0;
- (void)registerMatterEndpoint;
- (void)removeAccessGrant:(id)a0;
- (void)unregisterMatterEndpoint;

@end
