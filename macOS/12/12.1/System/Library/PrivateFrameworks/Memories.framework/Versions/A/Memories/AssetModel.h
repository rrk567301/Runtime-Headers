@class NSLock, NSMutableDictionary, NSMutableArray;

@interface AssetModel : NSObject {
    NSLock *m_assetLock;
    NSMutableDictionary *m_assetMap;
    NSMutableArray *m_knownAssets;
    double m_lastAssetsLibraryInvalidationAttempt;
}

+ (id)sharedInstance;
+ (double)imageScale;
+ (id)assetDirectory;
+ (id)builtInAssetDirectoryForClipType:(int)a0;
+ (id)deviceCharacteristicsDict;
+ (double)thumbnailScale;
+ (double)maxPixelsForImage:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (id)assetPathsForClipType:(int)a0 inProjectPath:(id)a1 excludingURLs:(id)a2;
- (void)clearAssetsList;
- (void)invalidateAssetLibrary;
- (void)loadAssetsListIfNeeded;
- (id)builtInAssetPathsForClipType:(int)a0;
- (id)fileTypesForClipType:(int)a0;
- (id)files:(id)a0 atPath:(id)a1 filteredForTypes:(id)a2;
- (id)filterURLs:(id)a0 fromPaths:(id)a1;
- (void)mpMediaLibraryDidChange:(id)a0;
- (id)pathForBuiltInAssetWithName:(id)a0;
- (id)assetPathsForRecordedAudio;
- (id)assetPathsForProjectAudio;
- (id)assetPathsForSharedAudio;
- (id)imageViewWithThemeImageNamed:(id)a0 renderingIntent:(int)a1 allowProxies:(BOOL)a2;
- (id)ingestMovieAtPath:(id)a0 intoProject:(id)a1 asSharedAssets:(BOOL)a2;

@end
