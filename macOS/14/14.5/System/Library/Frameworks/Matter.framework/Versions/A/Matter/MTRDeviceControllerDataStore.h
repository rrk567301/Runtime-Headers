@class MTRDeviceController, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTRDeviceControllerStorageDelegate;

@interface MTRDeviceControllerDataStore : NSObject {
    id<MTRDeviceControllerStorageDelegate> _storageDelegate;
    NSObject<OS_dispatch_queue> *_storageDelegateQueue;
    MTRDeviceController *_controller;
    NSMutableArray *_nodesWithResumptionInfo;
}

- (void).cxx_destruct;
- (id)_fetchNodeIndex;
- (void)storeAttributeValues:(id)a0 forNodeID:(id)a1;
- (id)_fetchAttributeValueForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2 attributeID:(id)a3;
- (void)clearStoredAttributesForNodeID:(id)a0;
- (id)_attributeIndexKeyForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (id)_attributeValueKeyForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2 attributeID:(id)a3;
- (void)_clearStoredAttributesForNodeID:(id)a0;
- (id)_clusterDataKeyForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (id)_clusterIndexKeyForNodeID:(id)a0 endpointID:(id)a1;
- (BOOL)_deleteAttributeIndexForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (BOOL)_deleteAttributeValueForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2 attributeID:(id)a3;
- (BOOL)_deleteClusterDataForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (BOOL)_deleteClusterIndexForNodeID:(id)a0 endpointID:(id)a1;
- (BOOL)_deleteEndpointIndexForNodeID:(id)a0;
- (BOOL)_deleteNodeIndex;
- (id)_endpointIndexKeyForNodeID:(id)a0;
- (id)_fetchAttributeCacheValueForKey:(id)a0 expectedClass:(Class)a1;
- (id)_fetchAttributeIndexForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (id)_fetchClusterDataForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (id)_fetchClusterIndexForNodeID:(id)a0 endpointID:(id)a1;
- (id)_fetchEndpointIndexForNodeID:(id)a0;
- (id)_findResumptionInfoWithKey:(id)a0;
- (void)_pruneEmptyStoredAttributesBranches;
- (BOOL)_removeAttributeCacheValueForKey:(id)a0;
- (BOOL)_storeAttributeCacheValue:(id)a0 forKey:(id)a1;
- (BOOL)_storeAttributeIndex:(id)a0 forNodeID:(id)a1 endpointID:(id)a2 clusterID:(id)a3;
- (BOOL)_storeAttributeValue:(id)a0 forNodeID:(id)a1 endpointID:(id)a2 clusterID:(id)a3 attributeID:(id)a4;
- (BOOL)_storeClusterData:(id)a0 forNodeID:(id)a1 endpointID:(id)a2 clusterID:(id)a3;
- (BOOL)_storeClusterIndex:(id)a0 forNodeID:(id)a1 endpointID:(id)a2;
- (BOOL)_storeEndpointIndex:(id)a0 forNodeID:(id)a1;
- (BOOL)_storeNodeIndex:(id)a0;
- (void)clearAllResumptionInfo;
- (void)clearAllStoredAttributes;
- (id)fetchLastLocallyUsedNOC;
- (id)findResumptionInfoByNodeID:(id)a0;
- (id)findResumptionInfoByResumptionID:(id)a0;
- (id)getStoredAttributesForNodeID:(id)a0;
- (id)getStoredClusterDataForNodeID:(id)a0;
- (id)initWithController:(id)a0 storageDelegate:(id)a1 storageDelegateQueue:(id)a2;
- (void)storeClusterData:(id)a0 forNodeID:(id)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })storeLastLocallyUsedNOC:(id)a0;
- (void)storeResumptionInfo:(id)a0;

@end
