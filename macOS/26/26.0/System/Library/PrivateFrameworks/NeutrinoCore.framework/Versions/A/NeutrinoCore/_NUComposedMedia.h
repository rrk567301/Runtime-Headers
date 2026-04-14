@class NSArray, NUChannelContainerMediaFormat, NSDictionary, NURenderNode, NUChannelMediaFormat;
@protocol NUAssetResourceID, NUAsset, NUMediaPrivate, NUMediaMetadata, NUMediaGeometry;

@interface _NUComposedMedia : NSObject <NUMediaPrivate>

@property (readonly, nonatomic) id<NUMediaPrivate> baseMedia;
@property (readonly, nonatomic) BOOL isFiltered;
@property (readonly, nonatomic) id<NUMediaGeometry> geometry;
@property (readonly, nonatomic) id<NUMediaMetadata> metadata;
@property (readonly, nonatomic) NUChannelMediaFormat *format;
@property (readonly, nonatomic) NSArray *requiredSourceMedias;
@property (readonly, nonatomic) NURenderNode *renderNode;
@property (readonly, nonatomic) NUChannelContainerMediaFormat *containerFormat;
@property (readonly, nonatomic) NSDictionary *components;
@property (readonly, weak, nonatomic) id<NUAsset> asset;
@property (readonly, nonatomic) id<NUAssetResourceID> resourceID;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)filteredMediaWithRenderNode:(id)a0 geometry:(id)a1;
- (id)initWithBaseMedia:(id)a0;
- (id)mediaForChannel:(id)a0;
- (id)mediaMatching:(id)a0;

@end
