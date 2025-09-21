@class NSManagedObjectModel;

@interface NFPersistenceManager : NSObject

@property (class, readonly, nonatomic) NSManagedObjectModel *managedObjectModel;

+ (id)managedObjectContext;
+ (id)persistentStoreCoordinator;
+ (char)isAppSandboxed;
+ (char)_backupExistingStore:(id)a0 withCoordinator:(id)a1 error:(id *)a2;
+ (id)_storeURLForVersion:(unsigned long long)a0 inDataDirectory:(id)a1;
+ (id)_validStoreURLInDataDirectory:(id)a0 movingOldStoreIfNeeded:(char)a1 withCoordinator:(id)a2 error:(id *)a3;
+ (void)addPersistentStoreIfNeeded;
+ (char)isRunningInNotes;
+ (id)notesContainerLibraryURL;
+ (id)persistentStoreCoordinatorAddPersistentStoreIfNecessary:(char)a0;
+ (void)setNotesContainerLibraryURL:(id)a0;
+ (void)setStoreCoordinatorIsReadOnly:(char)a0;
+ (char)storeCoordinatorIsReadOnly;

@end
