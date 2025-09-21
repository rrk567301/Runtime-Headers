@class NSXPCConnection, NSString, NSBundle, NSManagedObjectModel, NSError, NSPersistentStoreCoordinator, NSManagedObjectContext;
@protocol AnalyticsWorkspaceHealthDelegate;

@interface AnalyticsWorkspace : NSObject <NSCopying> {
    NSString *backingStore;
    char readOnly;
    char pathKnownToFail;
    NSString *storeKind;
}

@property (retain, nonatomic) NSError *persistentStoreError;
@property (readonly, nonatomic) char persistent;
@property (retain, nonatomic) id<AnalyticsWorkspaceHealthDelegate> healthDelegate;
@property (nonatomic) char forceIntegrityCheck;
@property (nonatomic) char forceDestroyPersistentStore;
@property (nonatomic) char forceDeleteFile;
@property (retain, nonatomic) NSString *objectModelName;
@property (retain, nonatomic) NSBundle *objectModelResidentBundle;
@property (readonly, nonatomic) char integrityCheckFailed;
@property (readonly, retain, nonatomic) NSManagedObjectModel *objectModel;
@property (readonly, retain, nonatomic) NSManagedObjectContext *mainObjectContext;
@property (readonly, retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ resetCompletionBlock;

+ (void)initialize;
+ (id)defaultWorkspace;
+ (id)workspaceWithName:(id)a0 atPath:(id)a1 objectModelName:(id)a2 objectModelBundle:(id)a3 useReadOnly:(char)a4;
+ (id)workspaceWithName:(id)a0 atPath:(id)a1 useReadOnly:(char)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)reset;
- (char)save;
- (char)setCustomPersistenceProperties:(id)a0;
- (id)_cloneInternal:(id)a0 intoWorkspace:(id)a1 ancestry:(id)a2 iteration:(unsigned long long)a3 mustFail:(char *)a4;
- (id)_initWithName:(id)a0 inMemory:(char)a1 useReadOnly:(char)a2 customModelName:(id)a3 loadModelFromBundle:(id)a4;
- (char)_primePath:(id)a0;
- (char)canCloneObjectsOfType:(id)a0;
- (id)cloneObject:(id)a0 intoWorkspace:(id)a1;
- (id)createNewContext;
- (void)enumerateResidentObjectsOfType:(id)a0 usingBlock:(id /* block */)a1;
- (id)initInMemoryWorkspaceWithName:(id)a0 customModelName:(id)a1 objectModelBundle:(id)a2;
- (id)initWorkspaceWithName:(id)a0 atPath:(id)a1 objectModelName:(id)a2 objectModelBundle:(id)a3 useReadOnly:(char)a4;
- (id)initWorkspaceWithName:(id)a0 atPath:(id)a1 useReadOnly:(char)a2;

@end
