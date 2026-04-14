@class PLLazyObject, NSString, PLPhotoLibraryBundle, PLSyndicationIngestMutex;

@interface PLDatabaseContext : NSObject <PLPhotoLibraryFactory> {
    PLPhotoLibraryBundle *_libraryBundle;
    PLLazyObject *_lazyMomentLibrary;
}

@property (readonly) PLSyndicationIngestMutex *syndicationIngestMutex;
@property (readonly) long long wellKnownPhotoLibraryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newShortLivedLibraryWithName:(const char *)a0 libraryRole:(unsigned long long)a1 bundle:(id)a2;
+ (id)newShortLivedLibraryWithName:(const char *)a0 bundle:(id)a1;

- (void)invalidate;
- (id)newShortLivedLibraryWithName:(const char *)a0;
- (void)perform:(id /* block */)a0 withName:(const char *)a1;
- (id)newMomentLibrary;
- (id)initWithLibraryBundle:(id)a0;
- (void)performTransactionSync:(id /* block */)a0 withName:(const char *)a1;
- (void)performSync:(id /* block */)a0 withName:(const char *)a1;
- (void)performTransaction:(id /* block */)a0 withName:(const char *)a1;
- (id)newShortLivedMacOpenClientLibraryWithName:(const char *)a0;
- (id)newShortLivedComputeSyncApplyLibraryWithNameSuffix:(const char *)a0;
- (id)newShortLivedLibraryWithName:(const char *)a0 libraryRole:(unsigned long long)a1;
- (id)newShortLivedLibraryForHistoryPersistenceReadingWithName:(const char *)a0;
- (void).cxx_destruct;
- (id)newShortLivedLibraryForOrderKeyManagerWithName:(const char *)a0;
- (void)dealloc;
- (id)newShortLivedCplLibraryWithNameSuffix:(const char *)a0;
- (id)momentLibrary;

@end
