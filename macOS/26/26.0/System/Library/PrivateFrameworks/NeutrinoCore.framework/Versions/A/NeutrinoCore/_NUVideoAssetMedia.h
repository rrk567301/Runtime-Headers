@class NSArray, NUChannelMediaFormat;
@protocol NUMediaMetadata, NUMediaGeometry;

@interface _NUVideoAssetMedia : _NUAssetMedia <NUComponentMedia>

@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;

- (id)initWithAsset:(id)a0 resourceID:(id)a1 format:(id)a2 geometry:(id)a3;
- (id)initWithVideoAsset:(id)a0 track:(id)a1 format:(id)a2 geometry:(id)a3;

@end
