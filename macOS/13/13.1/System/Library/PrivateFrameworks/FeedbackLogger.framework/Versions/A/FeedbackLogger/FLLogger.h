@class NSDistributedNotificationCenter, NSMutableDictionary, NSObject;
@protocol OS_os_log, FLLoggingContext, OS_dispatch_source, OS_os_transaction;

@interface FLLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *dbConnections;
@property (retain, nonatomic) NSMutableDictionary *persistentStores;
@property (retain, nonatomic) NSObject<FLLoggingContext> *context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long persistentStoreCacheTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *writeTransaction;
@property (nonatomic) unsigned long long writeTransactionTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *transactionTTLTimer;

+ (id)sharedLogger;
+ (id)readSiriCategoryFrom:(id)a0 recursive:(BOOL)a1;
+ (id)categoryForSiriPayload:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)closeAllStores;
- (void)closeStoreForApplicationFromNotification:(id)a0;
- (void)_setupTransactionTTLTimer;
- (void)_scheduleTransactionTTLTimer;
- (void)_transactionTTLTimerDidFire;
- (void)_cancelTransactionTTLTimer;
- (void)cancelTransactionTTLTimer;
- (id)__dispatched_databaseConnectionWithId:(id)a0;
- (id)__dispatched_persistentStoreWithId:(id)a0 category:(id)a1;
- (id)pathForStore:(id)a0;
- (void)closeStoreForBundleID:(id)a0;
- (void)_cleanPersistantStores;
- (id)_nextTimerFireDate;
- (void)_setupStoreCacheTimer;
- (void)_scheduleStoreCacheTimer;
- (void)_cancelStoreCacheTimer;
- (void)_closeAllStores;
- (void)setValue:(id)a0 forUploadHeaderNamed:(id)a1;
- (id)uploadHeaders;
- (void)scheduleImmediateUpload;
- (void)write:(id)a0 category:(id)a1 toStoreWithID:(id)a2 completion:(id /* block */)a3;
- (id)parsecStoreId;
- (id)parsecCategoryForPayload:(id)a0;
- (id)parsecPersistentStoreForBundleID:(id)a0;
- (void)reportParsecFeedback:(id)a0 completion:(id /* block */)a1;
- (id)siriStoreIdForBundleId:(id)a0;
- (id)siriWritingStoreForBundleID:(id)a0 category:(id)a1;
- (id)siriReadingStoreForBundleID:(id)a0;
- (void)reportSiriInstrumentationEvent:(id)a0 forBundleID:(id)a1 completion:(id /* block */)a2;
- (id)registerSiriInstrumentationObserver:(id)a0 observer:(id /* block */)a1;
- (void)removeSiriInstrumentationObserver:(id)a0;
- (id)dataUploadStoreIdForApplicationIdentifier:(id)a0;
- (void)reportDataUploadEvent:(id)a0 application:(id)a1 completion:(id /* block */)a2;
- (void)report:(id)a0 application:(id)a1;
- (void)report:(id)a0 application:(id)a1 onComplete:(id /* block */)a2;

@end
