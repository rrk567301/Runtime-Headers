@class NSString, NSFileManager, NSURL;

@interface CHSScreenshotManager : NSObject {
    NSURL *_baseURL;
    NSFileManager *_threadSafe_fileManager;
}

@property (class, readonly, nonatomic) NSString *basePath;
@property (class, readonly, nonatomic) CHSScreenshotManager *sharedManager;

- (id)allCachedSnapshotURLs;
- (void)deleteAllCachedScreenshots;
- (id)URLForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2 createIntermediateDirectories:(BOOL)a3;
- (id)baseURL;
- (id)initWithDirectory:(id)a0 fileManager:(id)a1;
- (void).cxx_destruct;
- (id)baseURLForWidget:(id)a0;
- (id)snapshotContextForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2;

@end
