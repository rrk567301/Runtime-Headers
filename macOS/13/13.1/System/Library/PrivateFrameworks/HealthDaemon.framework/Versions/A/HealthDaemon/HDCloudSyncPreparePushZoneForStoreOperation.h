@class HDCloudSyncTarget, HDCloudSyncStore;

@interface HDCloudSyncPreparePushZoneForStoreOperation : HDCloudSyncOperation {
    HDCloudSyncStore *_store;
}

@property (readonly, nonatomic) HDCloudSyncTarget *pushTarget;

+ (BOOL)shouldLogAtOperationStart;
+ (id)operationTagDependencies;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 store:(id)a2;

@end
