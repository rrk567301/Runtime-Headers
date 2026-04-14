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
- (id)newBackgroundContext;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (void)_onQueue_processPersistentStoreRemoteChanges;
- (id)cloudDatabaseFileURL;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)a0;
- (void)_onQueue_processCloudKitAccountChangedNotification:(id)a0;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (void)handleCloudKitWillResetNotification:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)_onQueue_expireCloudKitVouchers;
- (id)appTransactionAuthorName;
- (id)localDatabaseFileURL;
- (void)_onQueue_processPersistentStoreEventChangedNotification:(id)a0;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (BOOL)clearPersistentHistoryIfNeeded;
- (void)_onQueue_processCloudKitWillResetNotification:(id)a0;
- (id)ckContainerIdentifier;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (id)fileManager;
- (void)handlePersistentStoreEventChangedNotification:(id)a0;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)databaseDirectoryURL;
- (id)createPersistentContainer;
- (id)cloudPersistentStoreDescription;
- (id)lastProcessedPersistentHistoryToken;
- (void).cxx_destruct;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (BOOL)_onQueue_fetchInitialImportState;
- (id)createCkContainer;
- (id)localPersistentStoreDescription;
- (void)handleCloudKitAccountChangedNotification:(id)a0;
- (BOOL)databaseHasBeenCreated;
- (BOOL)overrideDeviceEncryptionCheck;

@end
