@class NSMutableDictionary, NSDistributedNotificationCenter, FLWriteTransaction, NSObject;
@protocol OS_os_log, FLLoggingContext, OS_dispatch_source;

@interface FLLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *dbConnections;
@property (retain, nonatomic) NSMutableDictionary *persistentStores;
@property (retain, nonatomic) NSObject<FLLoggingContext> *context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) BOOL isHoldingWriteTransaction;
@property (retain, nonatomic) FLWriteTransaction *writeTransaction;
@property (nonatomic) unsigned long long writeTransactionTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *writeTransactionTTLTimer;

+ (id)sharedLogger;
+ (BOOL)isManagedProcess;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_closeAllStores;
- (void)reportDataPlatformBatchedEvent:(id)a0 forBundleID:(id)a1 ofSchema:(id)a2 completion:(id /* block */)a3;
- (void)_cancelWriteTransactionTTLTimer;
- (id)__dispatched_databaseConnectionWithStorePath:(id)a0;
- (id)__dispatched_persistentStoreWithId:(id)a0 category:(id)a1;
- (id)__dispatched_persistentStoreWithId:(id)a0 category:(id)a1 storePath:(id)a2;
- (void)_cancelStoreCacheTimer;
- (void)_claimWriteTransaction;
- (void)_cleanPersistantStores;
- (BOOL)_isHoldingWriteTransaction;
- (id)_nextStoreCacheTimerFireDate;
- (void)_relinquishWriteTransaction;
- (void)_scheduleStoreCacheTimer;
- (void)_scheduleWriteTransactionTTLTimer;
- (void)_setupStoreCacheTimer;
- (void)_setupWriteTransactionTTLTimer;
- (void)_writeTransactionTTLTimerDidFire;
- (void)cancelWriteTransactionTTLTimer;
- (id)categoryForSiriPayload:(id)a0 autoBugHelper:(id)a1;
- (void)closeAllStores;
- (void)closeOpenBatchesAndStores;
- (void)closeStoreForApplicationFromNotification:(id)a0;
- (void)closeStoreForBundleID:(id)a0;
- (id)dataUploadStoreIdForApplicationIdentifier:(id)a0;
- (id)parsecCategoryForPayload:(id)a0;
- (id)parsecPersistentStoreForBundleID:(id)a0;
- (id)parsecStoreId;
- (id)readSiriCategoryFrom:(id)a0 recursive:(BOOL)a1 autoBugHelper:(id)a2;
- (id)registerSiriInstrumentationObserver:(id)a0 observer:(id /* block */)a1;
- (void)removeSiriInstrumentationObserver:(id)a0;
- (void)report:(id)a0 application:(id)a1;
- (void)report:(id)a0 application:(id)a1 onComplete:(id /* block */)a2;
- (void)reportDataPlatformSingleEvent:(id)a0 forBundleID:(id)a1 ofSchema:(id)a2 completion:(id /* block */)a3;
- (void)reportDataUploadEvent:(id)a0 application:(id)a1 completion:(id /* block */)a2;
- (void)reportParsecFeedback:(id)a0 completion:(id /* block */)a1;
- (void)reportSiriInstrumentationEvent:(id)a0 forBundleID:(id)a1 completion:(id /* block */)a2;
- (void)scheduleImmediateUpload;
- (void)setValue:(id)a0 forUploadHeaderNamed:(id)a1;
- (id)siriReadingStoreForBundleID:(id)a0;
- (id)siriReadingStoreForBundleID:(id)a0 directoryPath:(id)a1;
- (id)siriStoreIdForBundleId:(id)a0;
- (id)siriWritingStoreForBundleID:(id)a0 category:(id)a1;
- (id)uploadHeaders;
- (void)write:(id)a0 category:(id)a1 toStoreWithID:(id)a2 completion:(id /* block */)a3;

@end
