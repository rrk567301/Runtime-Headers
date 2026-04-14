@class NSObject;
@protocol OS_dispatch_queue;

@interface ICImageAnalysisController : NSObject

@property (class, readonly, nonatomic) ICImageAnalysisController *sharedController;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *photoLibraryQueue;

- (void).cxx_destruct;
- (id)init;
- (void)analyzeSearchableItems:(id)a0 completion:(id /* block */)a1;

@end
