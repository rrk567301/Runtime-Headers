@class HDCloudSyncTarget, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _HDCloudSyncStorePersistableState *_storeState;
}

@property (copy) HDCloudSyncTarget *target;

+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2;

@end
