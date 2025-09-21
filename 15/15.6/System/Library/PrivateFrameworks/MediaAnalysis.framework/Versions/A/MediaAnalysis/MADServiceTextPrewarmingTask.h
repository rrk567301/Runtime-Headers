@class NSString, NSArray, MADServiceTextAsset, NSObject;
@protocol OS_dispatch_queue;

@interface MADServiceTextPrewarmingTask : VCPMABaseTask {
    NSArray *_requests;
    MADServiceTextAsset *_asset;
    NSObject<OS_dispatch_queue> *_cancelQueue;
}

@property (retain, nonatomic) NSString *signpostPayload;

- (void).cxx_destruct;
- (char)run:(id *)a0;
- (char)cachesResources;
- (id)initWithRequests:(id)a0 cancelBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (char)interruptBackgroundTasks;
- (float)resourceRequirement;

@end
