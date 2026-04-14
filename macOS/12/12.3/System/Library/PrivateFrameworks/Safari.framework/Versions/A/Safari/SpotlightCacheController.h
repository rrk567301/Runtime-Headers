@class NSString, NSMutableDictionary;

@interface SpotlightCacheController : NSObject <SpotlightCacheController, NSFileManagerDelegate> {
    BOOL _updateInProgress;
    BOOL _needsUpdate;
    BOOL _kickingOffUpdaterThread;
    BOOL _updateImmediately;
    NSMutableDictionary *_handlers;
    NSMutableDictionary *_fileExtensions;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)fileManager:(id)a0 shouldProceedAfterError:(id)a1 removingItemAtPath:(id)a2;
- (void)updateCache;
- (void)clearAllMetadataFromDiskIfExistsWithCompletionHandler:(id /* block */)a0;
- (BOOL)fileIsSpotlightCacheFile:(id)a0;
- (id)URLToVisitFromSpotlightCacheFile:(id)a0;
- (void)fullUpdateNeededForType:(id)a0 immediately:(BOOL)a1;
- (void)updateCacheSoon;
- (void)partialUpdateNeededForType:(id)a0 immediately:(BOOL)a1;
- (id)cacheParentDirectory;
- (id)cacheSubdirectoryForDataType:(id)a0;
- (void)updaterThreadBody:(id)a0;
- (BOOL)forciblyCreateDirectory:(id)a0;
- (id)createCacheSubdirectoryForDataType:(id)a0;
- (void)deleteAllCachedFilesForType:(id)a0;
- (BOOL)updateCacheFilesForType:(id)a0;
- (void)updaterThreadFinished;
- (void)fullUpdateNeededForType:(id)a0;
- (void)partialUpdateNeededForType:(id)a0;
- (void)registerSpotlightDataSource:(id)a0 andWriter:(id)a1 forType:(id)a2;
- (id)createCacheParentDirectory;

@end
