@class NSPersistentContainer, NSString, NSObject;
@protocol OS_dispatch_queue, SKADatabaseProvidingDelegate;

@interface SKABaseDatabaseProvider : NSObject <SKADatabaseProviding>

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, weak, nonatomic) id<SKADatabaseProvidingDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileManager;
+ (id)logger;
+ (id)databaseFileURL;
+ (id)databaseDirectoryURL;

- (id)configurationName;
- (id)initWithDelegate:(id)a0;
- (id)newBackgroundContext;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)containerName;
- (void).cxx_destruct;
- (id)persistentStoreDescription;
- (void)_onQueue_processPersistentStoreRemoteChanges;
- (id)appTransactionAuthorName;
- (BOOL)clearPersistentHistoryIfNeeded;
- (id)createPersistentContainer;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)lastProcessedPersistentHistoryToken;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)persistentContainerToLoad;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;

@end
