@class HDCloudSyncOperation;

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;
@property (copy) id /* block */ shouldRunHandler;

+ (char)shouldProduceOperationAnalytics;
+ (char)shouldLogAtOperationEnd;
+ (char)shouldLogAtOperationStart;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (void)skip;
- (char)finishWithSuccess:(char)a0 error:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2 shouldRunHandler:(id /* block */)a3;

@end
