@class NSProgress, PHResourceLocalAvailabilityRequest, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, PXFastEnumeration;

@interface PXPhotoKitAssetLocalAvailabilityHelper : NSObject

@property (readonly, nonatomic) id<PXFastEnumeration> assets;
@property (readonly, nonatomic) char treatLivePhotoAsStill;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) char wasInterrupted;
@property (readonly, nonatomic) NSMutableArray *pinnedResourceLocalAvailabilityRequests;
@property (readonly, nonatomic) NSMutableArray *resourceLocalAvailabilityRequests;
@property (readonly, nonatomic) PHResourceLocalAvailabilityRequest *currentResourceRequest;
@property (readonly, nonatomic) NSProgress *overallProgress;
@property (retain, nonatomic) NSProgress *localAvailabilityProgress;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_setUpLocalAvailabilityRequests;
- (unsigned long long)_ensureAssetsAreLocallyAvailable:(id *)a0;
- (id)ensureLocalAvailabilityOfAssetsWithCompletionHandler:(id /* block */)a0;
- (id)initWithAssets:(id)a0 treatLivePhotoAsStill:(char)a1;

@end
