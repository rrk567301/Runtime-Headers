@interface HDCloudSyncUpdateLocalAnchorsOperation : HDCloudSyncSynchronousOperation

+ (BOOL)shouldLogAtOperationStart;
+ (id)operationTagDependencies;
+ (id)finishedOperationTags;

- (BOOL)performWithError:(id *)a0;

@end
