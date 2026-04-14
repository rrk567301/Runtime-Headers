@class NSManagedObjectContext, AXDispatchTimer;

@interface AXSSDatabaseManager : NSObject {
    int _lockNotificationToken;
    BOOL _isScreenedLocked;
    AXDispatchTimer *_identityChangeTimer;
}

@property (readonly, nonatomic) BOOL canSave;
@property (nonatomic) BOOL clientCloudKitSyncs;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

+ (id)sharedDatabase;
+ (long long)preferredContextType;

- (id)apsConnectionMachServiceName;
- (id)databaseFilePath;
- (id)containerIdentifier;
- (void).cxx_destruct;
- (id)cloudKitContainer;
- (void)setupDatabase;
- (id)init;
- (void)dealloc;
- (void)userAuthChanged;
- (BOOL)saveIfPossible:(id *)a0;
- (void)_contentDidUpdate:(id)a0;
- (void)_identityDidChange:(id)a0;
- (void)_storesWillChange:(id)a0;
- (id)cloudObjectFromLocalObjects:(id)a0 withTable:(id)a1 andObjectID:(id)a2;
- (id)managedObjectModelName;

@end
