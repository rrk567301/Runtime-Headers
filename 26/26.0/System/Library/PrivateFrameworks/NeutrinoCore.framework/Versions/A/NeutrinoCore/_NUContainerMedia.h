@class NUChannelContainerMediaFormat, NSDictionary, NSArray, NUChannelMediaFormat;
@protocol NUMediaMetadata, NUMediaGeometry;

@interface _NUContainerMedia : _NUMedia <NUContainerMedia> {
    NSDictionary *_components;
}

@property (readonly, nonatomic) NUChannelContainerMediaFormat *containerFormat;
@property (readonly, nonatomic) NSDictionary *components;
@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;

+ (id)containerWithFormat:(id)a0 components:(id)a1 geometry:(id)a2 error:(out id *)a3;

- (void).cxx_destruct;
- (id)_mediaMatching:(id)a0;
- (id)_mediaForChannel:(id)a0;
- (long long)containerMediaType;
- (id)initWithContainerType:(long long)a0 components:(id)a1 geometry:(id)a2;
- (id)initWithFormat:(id)a0 geometry:(id)a1;
- (id)mediaForChannel:(id)a0;
- (id)mediaMatching:(id)a0;
- (id)renderNode;

@end
