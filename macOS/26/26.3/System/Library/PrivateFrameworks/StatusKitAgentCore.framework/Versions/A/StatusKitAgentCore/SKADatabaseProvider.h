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
- (void)_onQueue_processPersistentStoreEventChangedNotification:(id)a0;
- (id)createPersistentContainer;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (BOOL)overrideDeviceEncryptionCheck;
- (void)_onQueue_processPersistentStoreRemoteChanges;
- (id)initWithDelegate:(id)a0;
- (void)_onQueue_expireCloudKitVouchers;
- (void)_onQueue_processCloudKitAccountChangedNotification:(id)a0;
- (id)localDatabaseFileURL;
- (void)_onQueue_processCloudKitWillResetNotification:(id)a0;
- (id)cloudDatabaseFileURL;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)a0;
- (void)handleCloudKitWillResetNotification:(id)a0;
- (id)createCkContainer;
- (void).cxx_destruct;
- (id)ckContainerIdentifier;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (BOOL)clearPersistentHistoryIfNeeded;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)appTransactionAuthorName;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (void)handleCloudKitAccountChangedNotification:(id)a0;
- (id)lastProcessedPersistentHistoryToken;
- (id)cloudPersistentStoreDescription;
- (id)newBackgroundContext;
- (BOOL)_onQueue_fetchInitialImportState;
- (void)handlePersistentStoreEventChangedNotification:(id)a0;
- (id)databaseDirectoryURL;
- (BOOL)databaseHasBeenCreated;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)localPersistentStoreDescription;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;

@end
