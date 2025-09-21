@class NSString, NSArray, MADServiceTextAsset, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MADServiceTextProcessingTask : VCPMABaseTask {
    NSArray *_requests;
    MADServiceTextAsset *_asset;
    NSMutableArray *_subtasks;
    NSObject<OS_dispatch_queue> *_cancelQueue;
}

@property (retain, nonatomic) NSString *signpostPayload;

- (BOOL)run:(id *)a0;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)cachesResources;
- (id)initWithRequests:(id)a0 asset:(id)a1 cancelBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)interruptBackgroundTasks;
- (float)resourceRequirement;

@end
