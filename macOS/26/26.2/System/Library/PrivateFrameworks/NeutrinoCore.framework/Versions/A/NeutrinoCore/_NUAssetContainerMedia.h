@class NUChannelContainerMediaFormat, NSDictionary, NSArray, NUChannelMediaFormat;
@protocol NUAssetResourceID, NUAsset, NUMediaMetadata, NUMediaGeometry;

@interface _NUAssetContainerMedia : _NUComposedMedia <NUContainerMedia, NUAssetMedia>

@property (readonly, nonatomic) NUChannelContainerMediaFormat *containerFormat;
@property (readonly, nonatomic) NSDictionary *components;
@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;
@property (readonly, weak, nonatomic) id<NUAsset> asset;
@property (readonly, nonatomic) id<NUAssetResourceID> resourceID;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 containerMedia:(id)a1;
- (id)initWithBaseMedia:(id)a0;

@end
