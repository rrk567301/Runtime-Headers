@class NSObject, MADTextEmbeddingCalibration;
@protocol OS_dispatch_queue;

@interface MADTextEmbeddingCalibrationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    MADTextEmbeddingCalibration *_instance;
}

@property (readonly, nonatomic) MADTextEmbeddingCalibration *instance;

+ (id)sharedResource;

- (void)purge;
- (void).cxx_destruct;
- (id)init;
- (long long)activeCost;
- (long long)inactiveCost;

@end
