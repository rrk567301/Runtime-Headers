@class HDSyncIdentity;

@interface HDCloudSyncComputePullTargetsOperation : HDCloudSyncSynchronousOperation {
    HDSyncIdentity *_currentSyncIdentity;
    char _hasUpgradedToSyncIdentity;
}

+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (char)shouldLogAtOperationEnd;
+ (char)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (char)performWithError:(id *)a0;

@end
