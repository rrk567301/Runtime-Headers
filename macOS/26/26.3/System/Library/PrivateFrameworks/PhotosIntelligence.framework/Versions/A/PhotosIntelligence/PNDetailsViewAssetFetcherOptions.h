@class PHFetchOptions;

@interface PNDetailsViewAssetFetcherOptions : NSObject

@property (nonatomic, retain) PHFetchOptions *fetchOptions;
@property (nonatomic) long long curationLength;
@property (nonatomic) BOOL includeOthersInSocialGroupAssets;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFetchOptions:(id)a0;

@end
