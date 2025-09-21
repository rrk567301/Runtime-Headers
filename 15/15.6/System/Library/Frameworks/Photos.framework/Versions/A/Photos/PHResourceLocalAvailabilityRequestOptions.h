@class NSObject;
@protocol OS_dispatch_queue;

@interface PHResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic) char treatLivePhotoAsStill;
@property (nonatomic) char dontAllowRAW;
@property (nonatomic) char includeAllAssetResources;
@property (nonatomic) char includeOriginalResourcesOnly;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) char allowMissingVideoComplement;

- (id)description;
- (void).cxx_destruct;

@end
