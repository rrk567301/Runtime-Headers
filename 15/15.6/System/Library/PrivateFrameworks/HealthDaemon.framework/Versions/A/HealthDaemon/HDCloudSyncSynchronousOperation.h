@interface HDCloudSyncSynchronousOperation : HDCloudSyncOperation

+ (char)shouldProduceOperationAnalytics;
+ (char)shouldLogAtOperationStart;

- (void)main;
- (char)performWithError:(id *)a0;

@end
