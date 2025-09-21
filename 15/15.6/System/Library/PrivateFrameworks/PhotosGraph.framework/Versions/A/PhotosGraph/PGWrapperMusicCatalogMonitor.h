@interface PGWrapperMusicCatalogMonitor : NSObject

+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (char)canAccessMediaLibrary;
+ (char)checkMusicCatalogEligibilityWithProgressReporter:(id)a0;
+ (char)clearCatalogMusicFromCacheWithPhotoLibrary:(id)a0 progressReporter:(id)a1 error:(id *)a2;

- (id)init;

@end
