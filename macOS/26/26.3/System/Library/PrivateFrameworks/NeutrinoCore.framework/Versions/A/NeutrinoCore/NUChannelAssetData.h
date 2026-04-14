@protocol NUAsset;

@interface NUChannelAssetData : NUChannelMediaData

@property (readonly, nonatomic) id<NUAsset> asset;

- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (id)initWithMedia:(id)a0;

@end
