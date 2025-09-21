@class NSString, NSMutableDictionary, NSMutableSet, NSCache;

@interface CMArchiveManager : NSObject <TCCancelDelegate> {
    char mIsThumbnail;
    char mIsOnPhone;
    unsigned long long mPageCount;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    double mCommitInterval;
    char mAutoCommit;
    NSCache *mStyleObjectCache;
}

@property (copy) NSString *passphrase;
@property char noDecorations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)blipTypeToResourceType:(int)a0;
+ (id)resourceTypeToExtension:(int)a0;
+ (id)resourceTypeToMIME:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isCancelled;
- (unsigned long long)pageCount;
- (unsigned long long)resourceCount;
- (void)setPageCount:(unsigned long long)a0;
- (void)setIsThumbnail:(char)a0;
- (id)_validateData:(id)a0 withType:(int *)a1;
- (id)addCssStyle:(id)a0;
- (void)addCssStyle:(id)a0 withName:(id)a1;
- (id)addResource:(id)a0 withName:(id)a1 type:(int)a2;
- (id)addResource:(id)a0 withType:(int)a1;
- (id)addResourceForDrawable:(id)a0 withType:(int)a1 drawable:(id)a2;
- (id)addStyle:(id)a0;
- (id)appendResourcePathToName:(id)a0;
- (id)cachedPathForDrawable:(id)a0;
- (void)closeResourceAtPath:(id)a0;
- (void)commitDataAtPath:(id)a0;
- (id)copyResourceWithName:(id)a0 type:(int)a1;
- (id)copyResourceWithType:(int)a0;
- (id)cssStylesheetString;
- (char)isOnPhone;
- (char)isProgressive;
- (char)isThumbnail;
- (void)pauseProgressiveMappingOnPath:(id)a0;
- (char)progressiveMappingIsPausedOnPath:(id)a0;
- (void)pushCssToPath:(id)a0;
- (void)pushData:(id)a0 toPath:(id)a1;
- (void)pushText:(id)a0 toPath:(id)a1;
- (id)resourcePathPrefix;
- (void)restartProgressiveMappingOnPath:(id)a0;
- (void)setAutoCommit:(char)a0;
- (void)setCommitInterval:(double)a0;
- (void)setHTMLHeight:(int)a0;
- (void)setHTMLWidth:(int)a0;
- (void)setIsOnPhone:(char)a0;
- (void)setResourcePathPrefix:(id)a0;

@end
