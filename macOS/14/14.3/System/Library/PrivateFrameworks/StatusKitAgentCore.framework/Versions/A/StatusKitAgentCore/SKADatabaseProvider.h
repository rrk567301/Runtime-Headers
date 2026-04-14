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
- (id)ckContainerIdentifier;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)cloudPersistentStoreDescription;
- (id)localPersistentStoreDescription;
- (id)appTransactionAuthorName;
- (id)cloudDatabaseFileURL;
- (id)createCkContainer;
- (id)createPersistentContainer;
- (id)databaseDirectoryURL;
- (BOOL)databaseHasBeenCreated;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)lastProcessedPersistentHistoryToken;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)localDatabaseFileURL;
- (BOOL)overrideDeviceEncryptionCheck;
- (void)processPersistentStoreRemoteChanges;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;

@end
