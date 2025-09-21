@class NURenderNode, NSArray, NUChannelMediaFormat;
@protocol NUMediaMetadata, NUMediaGeometry;

@interface _NURenderMedia : _NUComposedMedia <NURenderableMedia, NUComponentMedia> {
    id<NUMediaGeometry> _geometry;
}

@property (readonly, nonatomic) NURenderNode *renderNode;
@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;

- (void).cxx_destruct;
- (id)initWithBaseMedia:(id)a0;
- (id)initWithBaseMedia:(id)a0 renderNode:(id)a1;
- (id)initWithBaseMedia:(id)a0 renderNode:(id)a1 geometry:(id)a2;

@end
