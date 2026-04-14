@class CKVTaskHandler, CKVTaskController, CKVIndexManager, NSObject;
@protocol OS_dispatch_queue, KVDonateServiceProvider;

@interface CKVAdminServiceConnection : NSObject <CKVAdminService> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CKVTaskHandler *_taskHandler;
    CKVIndexManager *_indexManager;
    CKVTaskController *_daemonTaskController;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
    BOOL _eventSimulationActive;
}

- (void).cxx_destruct;
- (oneway void)startEventSimulation:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (oneway void)finishEventSimulation:(id /* block */)a0;
- (oneway void)triggerMigration:(BOOL)a0 completeAfterTrigger:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)triggerMaintenance:(id /* block */)a0;
- (oneway void)enumerateItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (oneway void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (oneway void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (id)initWithServiceQueue:(id)a0 taskHandler:(id)a1 indexManager:(id)a2 daemonTaskController:(id)a3 serviceProvider:(id)a4;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (BOOL)_isEventSimulationInactive:(id /* block */)a0;

@end
