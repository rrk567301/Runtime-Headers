@class NSObject, MADTextEmbeddingCalibration;
@protocol OS_dispatch_queue;

@interface MADTextEmbeddingCalibrationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    MADTextEmbeddingCalibration *_instance;
}

@property (readonly, nonatomic) MADTextEmbeddingCalibration *instance;

+ (id)sharedResource;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (long long)activeCost;
- (long long)inactiveCost;

@end
