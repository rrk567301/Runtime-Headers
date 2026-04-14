@class NSManagedObjectModel;

@interface NFPersistenceManager : NSObject

@property (class, readonly, nonatomic) NSManagedObjectModel *managedObjectModel;

+ (id)persistentStoreCoordinator;
+ (id)managedObjectContext;
+ (BOOL)isAppSandboxed;
+ (BOOL)storeCoordinatorIsReadOnly;
+ (void)setStoreCoordinatorIsReadOnly:(BOOL)a0;
+ (BOOL)isRunningInNotes;
+ (void)addPersistentStoreIfNeeded;
+ (id)persistentStoreCoordinatorAddPersistentStoreIfNecessary:(BOOL)a0;
+ (id)_validStoreURLInDataDirectory:(id)a0 movingOldStoreIfNeeded:(BOOL)a1 withCoordinator:(id)a2 error:(id *)a3;
+ (id)_storeURLForVersion:(unsigned long long)a0 inDataDirectory:(id)a1;
+ (BOOL)_backupExistingStore:(id)a0 withCoordinator:(id)a1 error:(id *)a2;
+ (void)setNotesContainerLibraryURL:(id)a0;
+ (id)notesContainerLibraryURL;

@end
