@class CSUTextEncoder, VUWGallery, MADTextEmbeddingThreshold, NSObject;
@protocol OS_dispatch_queue;

@interface MADTextEmbeddingResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    CSUTextEncoder *_textEncoder;
    VUWGallery *_entityGallery;
    MADTextEmbeddingThreshold *_calibration;
}

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) CSUTextEncoder *textEncoder;
@property (readonly, nonatomic) VUWGallery *entityGallery;
@property (readonly, nonatomic) long long tokenEmbeddingType;
@property (readonly, nonatomic) MADTextEmbeddingThreshold *calibration;
@property (readonly, nonatomic) unsigned long long calibrationVersion;

+ (long long)revision;
+ (id)sharedResource:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;

@end
