@class NSArray, NUChannelContainerMediaFormat, NSDictionary, NURenderNode, NUChannelMediaFormat;
@protocol NUAssetResourceID, NUAsset, NUMediaMetadata, NUMediaGeometry;

@interface _NUMedia : NSObject <NUMediaPrivate>

@property (readonly, nonatomic) long long mediaType;
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
- (id)initWithFormat:(id)a0 geometry:(id)a1;
- (id)mediaForChannel:(id)a0;
- (id)mediaMatching:(id)a0;

@end
