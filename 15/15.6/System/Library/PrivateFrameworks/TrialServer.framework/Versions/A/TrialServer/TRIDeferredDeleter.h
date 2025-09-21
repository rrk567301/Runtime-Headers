@class NSString;

@interface TRIDeferredDeleter : NSObject {
    NSString *_rootDir;
}

+ (char)_createSymlinkIfNonExistentAtPath:(id)a0 withDestinationPath:(id)a1;
+ (char)_removeDeferredDeletedItemWithLink:(id)a0 externalReferenceStore:(id)a1 wasDeleted:(char *)a2;

- (void).cxx_destruct;
- (id)initForRootDir:(id)a0;
- (char)_cleanupWithLinksDirLockWitness:(struct TRIFlockWitness_ { int x0; } *)a0 externalReferenceStore:(id)a1;
- (id)_collectRelativeLinkPathsWithLinksDirLockWitness:(struct TRIFlockWitness_ { int x0; } *)a0;
- (id)_deferredDeletedLinksDir;
- (id)_linkPathForDeferredDeletedItemAtPath:(id)a0;
- (char)collectGarbageWithRootDirLockWitness:(struct TRIFlockWitness_ { int x0; } *)a0 externalReferenceStore:(id)a1;
- (char)markItemAtRelativePath:(id)a0;
- (char)unmarkItemAtRelativePath:(id)a0;

@end
