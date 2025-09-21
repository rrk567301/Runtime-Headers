@interface TRIReferenceManagedDir : NSObject

+ (struct { unsigned char x0; })_acquireLockOnDir:(id)a0 withLockingMode:(int)a1 andRunBlock:(id /* block */)a2;
+ (id)_collectDeadSymlinksForManagedDir:(id)a0 withLockWitness:(struct TRIFlockWitness_ { int x0; } *)a1 liveSymlinkCount:(unsigned int *)a2;
+ (id)_containingManagedDirForPath:(id)a0 resolvedAbsPath:(id *)a1;
+ (char)_deleteReferenceManagedDirectory:(id)a0 usingTempDir:(id)a1 managedDirWasDeleted:(char *)a2;
+ (char)_isTargetOfSymlink:(id)a0 containedInManagedDir:(id)a1;
+ (id)_metadataDirForManagedDir:(id)a0;
+ (char)_removePaths:(id)a0 withLockWitness:(struct TRIFlockWitness_ { int x0; } *)a1 numRemoved:(unsigned int *)a2;
+ (id)_reverseLinksDirForManagedDir:(id)a0;
+ (char)_testDeletionEligibilityForManagedDir:(id)a0 withExternalReferenceStore:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2 logPrefix:(id)a3 isEligible:(char *)a4;
+ (char)collectDeferredDeletionItemsWithManagedDir:(id)a0;
+ (char)collectGarbageForManagedDir:(id)a0 withExternalReferenceStore:(id)a1 usingTempDir:(id)a2 managedDirWasDeleted:(char *)a3;
+ (char)createFromDir:(id)a0;
+ (char)isPathInManagedDir:(id)a0;
+ (char)removeFileInManagedDirWithPath:(id)a0 inUseDeletionBehavior:(unsigned char)a1 wasDeleted:(char *)a2;
+ (char)saveFromGarbageCollectionItemWithPath:(id)a0;
+ (char)symlinkFromCurrentPath:(id)a0 withFuturePath:(id)a1 toManagedPath:(id)a2;
+ (char)symlinkFromPath:(id)a0 toManagedPath:(id)a1;

- (id)init;

@end
