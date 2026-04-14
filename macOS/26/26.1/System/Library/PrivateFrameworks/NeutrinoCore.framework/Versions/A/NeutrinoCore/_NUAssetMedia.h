@class NSArray, NUChannelMediaFormat;
@protocol NUAssetResourceID, NUAsset, NUMediaGeometry, NUMediaMetadata;

@interface _NUAssetMedia : _NUMedia <NUAssetMedia>

@property (readonly, weak, nonatomic) id<NUAsset> asset;
@property (readonly, nonatomic) id<NUAssetResourceID> resourceID;
@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 resourceID:(id)a1 format:(id)a2 geometry:(id)a3;
- (id)initWithFormat:(id)a0 geometry:(id)a1;

@end
