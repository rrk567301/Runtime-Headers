@class NSArray, NSMutableDictionary;

@interface HDCloudSyncValidatePushTargetOperation : HDCloudSyncOperation {
    NSArray *_targets;
    NSMutableDictionary *_targetsBySequenceToDelete;
    BOOL _requiresOwnershipRoll;
}

+ (id)operationTagDependencies;
+ (BOOL)shouldLogAtOperationStart;

- (id)initWithConfiguration:(id)a0;
- (void)main;
- (void).cxx_destruct;

@end
