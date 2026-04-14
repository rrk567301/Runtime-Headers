@class CKLogicalDeviceContext, NSMapTable, NSMutableSet;

@interface CKLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedClient>

@property (retain, nonatomic) NSMapTable *assetsByUUID;
@property (weak, nonatomic) CKLogicalDeviceContext *deviceContext;
@property (retain, nonatomic) NSMutableSet *completedLongLivedOperationIDs;
@property (retain, nonatomic) NSMutableSet *outstandingOperationIDs;

- (void).cxx_destruct;
- (void)openFileWithOpenInfo:(id)a0 reply:(id /* block */)a1;
- (void)resetThrottles;
- (void)addThrottle:(id)a0;
- (void)readBytesOfInMemoryAssetContentWithUUID:(id)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)initWithDeviceContext:(id)a0;
- (void)trackAssets:(id)a0;
- (id)trackedAssetForUUID:(id)a0;
- (void)registerLongLivedOperationWithIDAsOutstanding:(id)a0;
- (void)registerLongLivedOperationWithIDAsCompleted:(id)a0 allowResumingCompletedLongLivedOperations:(BOOL)a1;

@end
