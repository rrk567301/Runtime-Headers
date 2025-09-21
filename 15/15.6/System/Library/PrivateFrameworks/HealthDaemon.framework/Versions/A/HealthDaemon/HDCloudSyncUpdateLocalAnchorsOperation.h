@interface HDCloudSyncUpdateLocalAnchorsOperation : HDCloudSyncSynchronousOperation

+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (char)shouldLogAtOperationStart;

- (char)performWithError:(id *)a0;

@end
