@class NSString, NSMutableDictionary;

@interface MPCMediaRemoteControllerAnimatedArtworkCache : NSObject {
    NSString *_artworkID;
    NSMutableDictionary *_assets;
}

- (id)init;
- (void).cxx_destruct;
- (id)assetForArtworkID:(id)a0 artworkKey:(id)a1;
- (void)insertAsset:(id)a0 forArtworkID:(id)a1 artworkKey:(id)a2;
- (void)removeAssetsForArtworkID:(id)a0;
- (void)updateArtworkID:(id)a0;

@end
