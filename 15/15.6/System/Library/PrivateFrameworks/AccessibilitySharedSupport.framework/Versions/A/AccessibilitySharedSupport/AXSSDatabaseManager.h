@class NSManagedObjectContext, AXDispatchTimer;

@interface AXSSDatabaseManager : NSObject {
    int _lockNotificationToken;
    char _isScreenedLocked;
    AXDispatchTimer *_identityChangeTimer;
}

@property (readonly, nonatomic) char canSave;
@property (nonatomic) char clientCloudKitSyncs;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (id)sharedDatabase;
+ (long long)preferredContextType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)apsConnectionMachServiceName;
- (id)databaseFilePath;
- (id)cloudKitContainer;
- (void)setupDatabase;
- (char)saveIfPossible:(id *)a0;
- (void)userAuthChanged;
- (void)_contentDidUpdate:(id)a0;
- (void)_identityDidChange:(id)a0;
- (void)_storesWillChange:(id)a0;
- (id)cloudObjectFromLocalObjects:(id)a0 withTable:(id)a1 andObjectID:(id)a2;
- (id)managedObjectModelName;

@end
