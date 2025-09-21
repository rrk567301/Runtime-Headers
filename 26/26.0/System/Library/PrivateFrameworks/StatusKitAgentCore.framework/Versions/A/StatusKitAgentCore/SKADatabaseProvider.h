@class NSNumber, NSObject, NSString, NSPersistentCloudKitContainer, NSMutableArray, CKContainer;
@protocol OS_dispatch_queue, SKADatabaseProvidingDelegate;

@interface SKADatabaseProvider : NSObject <SKADatabaseProviding>

@property (retain, nonatomic) NSPersistentCloudKitContainer *persistentContainer;
@property (retain, nonatomic) CKContainer *ckContainer;
@property (nonatomic) BOOL onQueue_accountCheckCompleted;
@property (nonatomic) BOOL onQueue_accountSupportsDeviceToDeviceEncryption;
@property (retain, nonatomic) NSMutableArray *importCompletionHandlers;
@property (nonatomic) BOOL onQueue_isInitialImportDBStateQueryable;
@property (retain, nonatomic) NSNumber *onQueue_hasInitialCloudKitImportOccurred;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property (weak, nonatomic) id<SKADatabaseProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)fileManager;
- (id)databaseDirectoryURL;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)a0;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (void)handlePersistentStoreEventChangedNotification:(id)a0;
- (void)handleCloudKitAccountChangedNotification:(id)a0;
- (void)_onQueue_expireCloudKitVouchers;
- (id)cloudPersistentStoreDescription;
- (void)_onQueue_processPersistentStoreRemoteChanges;
- (void)_onQueue_processPersistentStoreEventChangedNotification:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)ckContainerIdentifier;
- (BOOL)databaseHasBeenCreated;
- (id)appTransactionAuthorName;
- (id)localDatabaseFileURL;
- (id)lastProcessedPersistentHistoryToken;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)createCkContainer;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)localPersistentStoreDescription;
- (BOOL)_onQueue_fetchInitialImportState;
- (void)handleCloudKitWillResetNotification:(id)a0;
- (BOOL)overrideDeviceEncryptionCheck;
- (id)cloudDatabaseFileURL;
- (void)_onQueue_processCloudKitWillResetNotification:(id)a0;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (void)_onQueue_processCloudKitAccountChangedNotification:(id)a0;
- (id)containerName;
- (id)createPersistentContainer;
- (id)newBackgroundContext;
- (void).cxx_destruct;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;

@end
