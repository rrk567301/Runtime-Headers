@class NSMutableDictionary, NSString, NSMutableSet, NSHashTable;

@interface IMPhotoLibraryPersistenceManager : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSMutableDictionary *syndicationIdentifierSaveStateCache;
@property (retain, nonatomic) NSMutableDictionary *syndicationIdentifierToAssetUUIDCache;
@property (retain, nonatomic) NSMutableSet *syndicationIdentifiersWithActiveFetch;
@property (nonatomic) BOOL libraryAlreadyOpened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_assetFetchQueue;
+ (id)_photoLibraryInternalQueue;
+ (id)photosSyndicationIdentifiersForMessage:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateCache;
- (void)_notifyListeners;
- (void)photoLibraryDidChange:(id)a0;
- (BOOL)_isListenerRegistered:(id)a0;
- (void)_openPhotoLibraryIfNecessary;
- (unsigned long long)cachedCountOfSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)a0 shouldFetchAndNotifyAsNeeded:(BOOL)a1 didStartFetch:(BOOL *)a2;
- (void)fetchInfoForSyndicationIdentifiersSavedToSystemPhotoLibrary:(id)a0 completion:(id /* block */)a1;
- (void)registerPhotoLibraryPersistenceManagerListener:(id)a0;
- (void)unregisterPhotoLibraryPersistenceManagerListener:(id)a0;

@end
