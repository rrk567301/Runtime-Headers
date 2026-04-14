@class HDCloudSyncTarget, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPushStoreOperation : HDCloudSyncOperation {
    HDCloudSyncTarget *_target;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _HDCloudSyncStorePersistableState *_storeState;
}

@property (copy) HDCloudSyncTarget *target;
@property (nonatomic) long long rebaseReason;

+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void).cxx_destruct;
- (id)analyticsDictionary;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 target:(id)a2;

@end
