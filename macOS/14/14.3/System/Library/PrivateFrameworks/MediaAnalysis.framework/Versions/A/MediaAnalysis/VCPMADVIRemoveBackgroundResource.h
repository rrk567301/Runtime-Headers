@class VCPMADVIRemoveBackgroundCachedImageHandler;

@interface VCPMADVIRemoveBackgroundResource : VCPMADVisionResource

@property (nonatomic) BOOL maskOnly;
@property (retain, nonatomic) VCPMADVIRemoveBackgroundCachedImageHandler *cachedImageHandler;

+ (id)sharedResource;

- (void).cxx_destruct;
- (void)purge;
- (long long)activeCost;
- (long long)inactiveCost;

@end
