@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray;

@interface ILMediaBrowserImageManager : NSObject {
    NSRecursiveLock *_imageAccessLock;
    NSString *_uniqueID;
    NSString *_cachedDBasePath;
    NSMutableDictionary *_cachedDBaseDict;
    NSMutableArray *_loadAttributesRequestQueue;
    NSMutableDictionary *_loadAttributesRequestsByPath;
    BOOL _cachedDBaseNeedsSave;
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;

- (void)dealloc;
- (id)init;
- (id)iconForFile:(id)a0;
- (id)imageNamed:(id)a0;
- (id)imageNamed:(id)a0 inBundle:(id)a1;
- (id)currentBundle;
- (id)iconImageForFilePath:(id)a0;
- (void)loadCachedAttributesForMediaObject:(id)a0;
- (void)loadCachedAttributesForMediaObject:(id)a0 updateIfNotFound:(BOOL)a1;
- (void)handleApplicationWillTerminate:(id)a0;
- (void)writeCachedDBaseDictToFile;
- (id)defaultFolderImage;
- (id)counterBadgeImageForCount:(unsigned long long)a0 scaleFactor:(double)a1;
- (id)cachedDBaseDict;
- (void)applyCachedInfo:(id)a0 toMediaObject:(id)a1;
- (void)loadAttributes:(id)a0 forMediaObject:(id)a1 atPath:(id)a2;
- (void)updateThumbnailDataXmlForPath:(id)a0 info:(id)a1;
- (void)loadAttributes:(id)a0 forImageMediaObject:(id)a1 atPath:(id)a2;
- (void)loadAttributes:(id)a0 forVideoMediaObject:(id)a1 atPath:(id)a2;
- (void)processLoadAttributesRequest;
- (void)checkForNextRequest;
- (void)addLoadAttributesRequest:(id)a0;
- (id)imageBitmapRep:(id)a0;
- (void)applyRequestedInfoToMediaObject:(id)a0;
- (void)removeRequestFromQueue:(id)a0;
- (void)extractThumbnailAndMetadataFromMovieRequest:(id)a0;
- (id)avAssetWithPath:(id)a0;
- (void)continueProcessingLoadAttributesRequest:(id)a0;
- (id)iconForMediaGroupType:(unsigned long long)a0;
- (id)counterBadgeImageForCount:(unsigned long long)a0;
- (id)defaultOfflineFolderImage;
- (id)iTunesIcon;
- (id)iPhotoIcon;
- (id)apertureIcon;
- (id)iMovieIcon;
- (id)iMovie7Icon;
- (id)garageBandIcon;
- (id)photoBoothIcon;
- (id)attemptToResolveMediaAlias:(id)a0 moviePath:(id)a1;

@end
