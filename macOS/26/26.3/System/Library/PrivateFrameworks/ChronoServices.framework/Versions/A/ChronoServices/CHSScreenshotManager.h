@class NSString, NSFileManager, NSURL;

@interface CHSScreenshotManager : NSObject {
    NSURL *_baseURL;
    NSFileManager *_threadSafe_fileManager;
}

@property (class, readonly, nonatomic) NSString *basePath;
@property (class, readonly, nonatomic) CHSScreenshotManager *sharedManager;

- (id)URLForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2 createIntermediateDirectories:(BOOL)a3;
- (id)baseURL;
- (id)initWithDirectory:(id)a0 fileManager:(id)a1;
- (id)allCachedSnapshotURLs;
- (void)deleteAllCachedScreenshots;
- (id)baseURLForWidget:(id)a0;
- (void).cxx_destruct;
- (id)snapshotContextForWidget:(id)a0 metrics:(id)a1 attributes:(id)a2;

@end
