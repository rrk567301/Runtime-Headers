@interface PGMusicCatalogMonitor : NSObject

+ (void)checkMusicCatalogEligibilityWithProgressReporter:(id)a0 completionHandler:(id /* block */)a1;
+ (void)clearCatalogMusicFromCacheWithPhotoLibrary:(id)a0 progressReporter:(id)a1 completionHandler:(id /* block */)a2;
+ (char)canAccessMediaLibrary;
+ (char)checkMusicCatalogEligibilityWithProgressReporter:(id)a0;

@end
