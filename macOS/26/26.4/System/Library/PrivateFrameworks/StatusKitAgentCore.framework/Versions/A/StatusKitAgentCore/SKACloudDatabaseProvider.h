@class CKContainer, NSNumber, NSString, NSMutableArray, NSPersistentContainer;
@protocol SKACloudDatabaseProvidingDelegate;

@interface SKACloudDatabaseProvider : SKABaseDatabaseProvider <SKACloudDatabaseProviding>

@property (readonly, weak, nonatomic) id<SKACloudDatabaseProvidingDelegate> delegate;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) CKContainer *ckContainer;
@property (nonatomic) BOOL onQueue_accountCheckCompleted;
@property (nonatomic) long long onQueue_deviceToDeviceEncryptionCapability;
@property (retain, nonatomic) NSMutableArray *importCompletionHandlers;
@property (nonatomic) BOOL onQueue_isInitialImportDBStateQueryable;
@property (retain, nonatomic) NSNumber *onQueue_hasInitialCloudKitImportOccurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)databaseFileURL;

- (id)configurationName;
- (void).cxx_destruct;
- (id)persistentStoreDescription;
- (id)ckContainerIdentifier;
- (void)_onQueue_expireCloudKitVouchers;
- (BOOL)_onQueue_fetchInitialImportState;
- (void)_onQueue_processCloudKitAccountChangedNotification:(id)a0;
- (void)_onQueue_processCloudKitWillResetNotification:(id)a0;
- (void)_onQueue_processPersistentStoreEventChangedNotification:(id)a0;
- (BOOL)clearPersistentHistoryIfNeeded;
- (id)createCkContainer;
- (id)createPersistentContainer;
- (void)deviceToDeviceEncryptedDatabaseCapabilityWithCompletion:(id /* block */)a0;
- (void)handleCloudKitAccountChangedNotification:(id)a0;
- (void)handleCloudKitWillResetNotification:(id)a0;
- (void)handlePersistentStoreEventChangedNotification:(id)a0;
- (void)hasInitialCloudKitImportOccurred:(id /* block */)a0;
- (id)initWithCloudDelegate:(id)a0;
- (BOOL)overrideDeviceEncryptionCheck;
- (id)persistentContainerToLoad;

@end
