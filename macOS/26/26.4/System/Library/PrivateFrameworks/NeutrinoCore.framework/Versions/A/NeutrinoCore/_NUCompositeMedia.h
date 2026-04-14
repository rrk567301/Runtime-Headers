@class NSDictionary, NSArray, NUChannelMediaFormat;
@protocol NUMediaMetadata, NUMediaGeometry;

@interface _NUCompositeMedia : _NUMedia <NUCompositeMedia>

@property (readonly, nonatomic) NSDictionary *inputMedias;
@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;

- (void).cxx_destruct;
- (id)initWithFormat:(id)a0 geometry:(id)a1;
- (id)initWithInputMedias:(id)a0 format:(id)a1 geometry:(id)a2;

@end
