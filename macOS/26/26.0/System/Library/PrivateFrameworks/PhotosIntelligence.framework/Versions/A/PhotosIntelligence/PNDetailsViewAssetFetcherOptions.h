@class PHFetchOptions;

@interface PNDetailsViewAssetFetcherOptions : NSObject

@property (nonatomic, retain) PHFetchOptions *fetchOptions;
@property (nonatomic) long long curationLength;
@property (nonatomic) BOOL includeOthersInSocialGroupAssets;

- (id)initWithFetchOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
