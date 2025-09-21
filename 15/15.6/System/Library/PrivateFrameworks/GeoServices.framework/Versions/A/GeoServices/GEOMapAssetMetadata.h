@class NSArray;

@interface GEOMapAssetMetadata : NSObject {
    NSArray *_tiles;
    char _enableASTCTextures;
}

- (void).cxx_destruct;
- (id)initWithVectorTiles:(id)a0 enableASTCTextures:(char)a1;
- (id)keysForMetroAvailability:(char)a0;

@end
