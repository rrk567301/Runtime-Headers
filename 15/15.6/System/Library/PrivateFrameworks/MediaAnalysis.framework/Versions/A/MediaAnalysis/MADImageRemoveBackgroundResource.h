@class MADRemoveBackgroundCachedMaskState;

@interface MADImageRemoveBackgroundResource : VCPMADVisionResource

@property (nonatomic) char maskOnly;
@property (retain, nonatomic) MADRemoveBackgroundCachedMaskState *cachedMaskState;

+ (id)sharedResource;

- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;

@end
