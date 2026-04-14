@class PHFetchOptions;

@interface PNDetailsViewAssetFetcherOptions : NSObject

@property (nonatomic, retain) PHFetchOptions *fetchOptions;
@property (nonatomic) long long curationLength;
@property (nonatomic) BOOL includeOthersInSocialGroupAssets;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFetchOptions:(id)a0;

@end
