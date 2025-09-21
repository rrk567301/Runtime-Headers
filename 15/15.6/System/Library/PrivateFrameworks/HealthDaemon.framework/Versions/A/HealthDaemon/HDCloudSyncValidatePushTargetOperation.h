@class NSArray, NSMutableDictionary;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    NSArray *_targets;
    NSMutableDictionary *_targetsBySequenceToDelete;
    char _requiresOwnershipRoll;
}

+ (id)operationTagDependencies;
+ (char)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0;

@end
