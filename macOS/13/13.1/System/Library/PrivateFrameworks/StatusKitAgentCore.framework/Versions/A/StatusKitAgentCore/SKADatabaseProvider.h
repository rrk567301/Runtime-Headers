@class CKContainer, NSString, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue, SKADatabaseProvidingDelegate;

@interface SKADatabaseProvider : NSObject <SKADatabaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *historyProcessingQueue;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) CKContainer *ckContainer;
@property (weak, nonatomic) id<SKADatabaseProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (void).cxx_destruct;
- (id)fileManager;
- (id)containerName;
- (id)initWithDelegate:(id)a0;
- (id)newBackgroundContext;
- (id)createPersistentContainer;
- (id)ckContainerIdentifier;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (BOOL)databaseHasBeenCreated;
- (id)appTransactionAuthorName;
- (id)createCkContainer;
- (id)databaseDirectoryURL;
- (id)localDatabaseFileURL;
- (id)cloudDatabaseFileURL;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)localPersistentStoreDescription;
- (id)cloudPersistentStoreDescription;
- (void)processPersistentStoreRemoteChanges;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)lastProcessedPersistentHistoryToken;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (BOOL)overrideDeviceEncryptionCheck;

@end
