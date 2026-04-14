@class FPDownloadInfo, FPDCoordinator, NSObject;
@protocol OS_dispatch_queue;

@interface FPDDownloadOperation : FPDActionOperation {
    NSObject<OS_dispatch_queue> *_queue;
    FPDCoordinator *_coordinator;
}

@property (readonly, nonatomic) FPDownloadInfo *info;

+ (BOOL)_validateInfo:(id)a0;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithActionInfo:(id)a0 request:(id)a1 server:(id)a2;
- (void)sendPastUpdatesToClient:(id)a0;
- (id)downloadInfo;
- (void)_setupCreatedItemForRoot:(id)a0;
- (void)_finishedDownloadingLocator:(id)a0 withError:(id)a1;

@end
