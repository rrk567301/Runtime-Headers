@class NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary;

@interface NSPersistentDocument : NSDocument {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    id _store;
    unsigned long long _pDocFlags;
    NSMutableDictionary *_relatedRequestURLs;
}

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (readonly) NSManagedObjectModel *managedObjectModel;

+ (char)_hasOverrideForSelector:(SEL)a0 fromBaseClass:(Class)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (char)_finishWritingToURL:(id)a0 byMovingItemAtURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setFileURL:(id)a0;
- (void)_discardEditing;
- (void)setUndoManager:(id)a0;
- (id)persistentStoreTypeForFileType:(id)a0;
- (void)_commitEditingThenContinue:(id /* block */)a0;
- (char)_configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)_documentEditor:(id)a0 didCommit:(char)a1 withContext:(void *)a2;
- (char)_isAtomicPersistentStoreType:(id)a0;
- (char)_isBeingEdited;
- (char)_movePersistentStore:(id)a0 fromURL:(id)a1 toURL:(id)a2 attributes:(id)a3 error:(id *)a4;
- (id)_persistentStoreCoordinator;
- (void)_releaseRelatedItemsForURL:(id)a0;
- (id)_requestRelatedItemForURL:(id)a0 withLastComponent:(id)a1;
- (void)_requestSQLiteRelatedItemsForURL:(id)a0 attributes:(id)a1;
- (char)_revertToVersion:(id)a0 preservingFirst:(char)a1 error:(id *)a2;
- (char)_unlockAndReturnError:(id *)a0;
- (id)backupFileURL;
- (char)configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (char)configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 modelConfiguration:(id)a2 storeOptions:(id)a3 error:(id *)a4;
- (char)hasUndoManager;
- (char)isEntireFileLoaded;
- (void)moveToURL:(id)a0 completionHandler:(id /* block */)a1;
- (char)readFromURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (char)revertToContentsOfURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)setHasUndoManager:(char)a0;
- (char)writeSafelyToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 error:(id *)a3;
- (char)writeToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 originalContentsURL:(id)a3 error:(id *)a4;

@end
