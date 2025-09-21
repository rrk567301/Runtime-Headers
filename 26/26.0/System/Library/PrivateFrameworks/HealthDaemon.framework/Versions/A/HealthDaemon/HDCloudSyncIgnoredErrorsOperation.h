@class HDCloudSyncOperation;

@interface HDCloudSyncIgnoredErrorsOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;

+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationEnd;
+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (id)description;
- (void).cxx_destruct;
- (void)skip;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2;

@end
