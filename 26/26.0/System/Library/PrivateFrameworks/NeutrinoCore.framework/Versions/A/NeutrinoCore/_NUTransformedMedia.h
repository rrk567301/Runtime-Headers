@class NSArray, NUGeometryTransform, NUChannelMediaFormat;
@protocol NUMediaMetadata, NUMediaGeometry;

@interface _NUTransformedMedia : _NUComposedMedia <NUTransformedMedia>

@property (readonly, nonatomic) NUGeometryTransform *transform;
@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;

- (void).cxx_destruct;
- (id)initWithBaseMedia:(id)a0;
- (id)initWithBaseMedia:(id)a0 transform:(id)a1;

@end
