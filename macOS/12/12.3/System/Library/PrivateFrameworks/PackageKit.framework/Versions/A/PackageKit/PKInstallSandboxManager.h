@class NSObject;
@protocol OS_dispatch_queue;

@interface PKInstallSandboxManager : NSObject {
    NSObject<OS_dispatch_queue> *_repoQueue;
    NSObject<OS_dispatch_queue> *_sandboxRemoveQueue;
}

+ (id)sharedSandboxManager;
+ (BOOL)_verboseMode;
+ (id)_stagingCachePaths;

- (void)dealloc;
- (id)init;
- (id)_bootSessionUUID;
- (id)pathToSharedTemporaryDirectoryCreating:(BOOL)a0;
- (void)purgeSharedTemporaryDirectory;
- (BOOL)hasStagedSandboxForRequest:(id)a0;
- (unsigned long long)irrelevantSpaceOnVolume:(id)a0 forInstallingRequest:(id)a1;
- (void)requestFreeSpace:(unsigned long long)a0 onVolume:(id)a1 forInstallingRequest:(id)a2 appStoreOnly:(BOOL)a3 forSystemSoftware:(BOOL)a4 notifyOn:(id)a5 withBlock:(id /* block */)a6;
- (void)finishSandboxRemovalWithCompletionHandler:(id /* block */)a0;
- (id)sandboxForRequest:(id)a0 created:(BOOL *)a1 error:(id *)a2;
- (void)discardSandbox:(id)a0;
- (BOOL)saveSandboxAsStaged:(id)a0;
- (unsigned long long)purgeableSpaceOnVolume:(id)a0 appStoreOnly:(BOOL)a1 forSystemSoftware:(BOOL)a2;
- (unsigned long long)cleanupOrphanedSpaceOnVolume:(id)a0;
- (unsigned long long)orphanedSpaceOnVolume:(id)a0;
- (id)_currentSandboxPathsForDestination:(id)a0 forSystemSoftware:(BOOL)a1;
- (id)_sandboxAtPath:(id)a0 matchingRequest:(id)a1 forUse:(BOOL)a2;
- (id)_activeSandboxPathsForDestination:(id)a0 forSystemSoftware:(BOOL)a1;
- (id)_addSandboxPathForDestination:(id)a0 forSystemSoftware:(BOOL)a1;
- (id)_activateSandboxAtPath:(id)a0 error:(id *)a1;
- (id)_trashSandboxAtPath:(id)a0;
- (id)_statePathForSandboxAtPath:(id)a0;
- (BOOL)_saveSandboxState:(id)a0;
- (id)_deactivateSandboxAtPath:(id)a0;
- (void)discardSandbox:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)sandboxSize:(id)a0;
- (BOOL)_removeSandbox:(id)a0;
- (id)_sessionUUIDFilePathForSandboxAtPath:(id)a0;
- (BOOL)_isSandboxStaleAtPath:(id)a0;
- (id)_sandboxRepositoryForDestination:(id)a0 forSystemSoftware:(BOOL)a1 create:(BOOL)a2 error:(id *)a3;
- (id)_anySandboxPathForDestination:(id)a0 forSystemSoftware:(BOOL)a1;
- (id)_repositoryParentPathForRootVolume;
- (BOOL)_canCreateDirectoryUnder:(id)a0;
- (id)_installerSandboxesPathForVolume:(id)a0 forSystemSoftware:(BOOL)a1;
- (BOOL)_ensureDirectoryExists:(id)a0 withMode:(unsigned short)a1 withUID:(unsigned int)a2 withGID:(unsigned int)a3;
- (unsigned long long)purgeableSpaceOnVolume:(id)a0 appStoreOnly:(BOOL)a1;
- (id)_orphanedSandboxPathsOnVolume:(id)a0;
- (id)_inactiveSandboxesOnMountPoint:(id)a0 forInstallingRequest:(id)a1 appStoreOnly:(BOOL)a2 forSystemSoftware:(BOOL)a3 calculateRelevance:(BOOL)a4 invalidSandboxPaths:(id *)a5;
- (long long)_compareSandbox:(id)a0 toSandbox:(id)a1;
- (long long)_relevanceOfSandbox:(id)a0 forInstallingRequest:(id)a1;
- (unsigned long long)purgeableSpaceOnVolume:(id)a0;

@end
