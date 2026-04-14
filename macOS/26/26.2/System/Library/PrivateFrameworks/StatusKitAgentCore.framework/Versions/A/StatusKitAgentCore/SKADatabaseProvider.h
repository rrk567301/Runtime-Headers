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

- (id)containerName;
- (id)fileManager;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (BOOL)databaseHasBeenCreated;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)createCkContainer;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (id)databaseDirectoryURL;
- (void)_onQueue_processPersistentStoreEventChangedNotification:(id)a0;
- (void)_onQueue_expireCloudKitVouchers;
- (id)localPersistentStoreDescription;
- (id)cloudDatabaseFileURL;
- (void).cxx_destruct;
- (id)ckContainerIdentifier;
- (BOOL)overrideDeviceEncryptionCheck;
- (id)createPersistentContainer;
- (void)_onQueue_processCloudKitWillResetNotification:(id)a0;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)appTransactionAuthorName;
- (void)_onQueue_processPersistentStoreRemoteChanges;
- (void)handleCloudKitAccountChangedNotification:(id)a0;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (id)lastProcessedPersistentHistoryToken;
- (id)localDatabaseFileURL;
- (BOOL)clearPersistentHistoryIfNeeded;
- (void)handleCloudKitWillResetNotification:(id)a0;
- (id)cloudPersistentStoreDescription;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (id)newBackgroundContext;
- (BOOL)_onQueue_fetchInitialImportState;
- (id)initWithDelegate:(id)a0;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)a0;
- (void)_onQueue_processCloudKitAccountChangedNotification:(id)a0;
- (void)handlePersistentStoreEventChangedNotification:(id)a0;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;

@end
