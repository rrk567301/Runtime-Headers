@class HDCloudSyncOperation;

@interface HDCloudSyncIgnoredErrorsOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;

+ (char)shouldProduceOperationAnalytics;
+ (char)shouldLogAtOperationEnd;
+ (char)shouldLogAtOperationStart;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (void)skip;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2;

@end
