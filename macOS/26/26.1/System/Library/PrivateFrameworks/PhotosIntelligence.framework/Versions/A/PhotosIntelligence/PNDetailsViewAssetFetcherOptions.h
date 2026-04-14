@class PHFetchOptions;

@interface PNDetailsViewAssetFetcherOptions : NSObject

@property (nonatomic, retain) PHFetchOptions *fetchOptions;
@property (nonatomic) long long curationLength;
@property (nonatomic) BOOL includeOthersInSocialGroupAssets;

- (id)initWithFetchOptions:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
