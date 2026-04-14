@class CKVTaskSettings, CKVTaskManager, CESRSpeechProfileSiteManager, SEMIndexSiteManager, CCDataSiteManager, NSObject;
@protocol OS_dispatch_queue, CCDonateServiceProvider;

@interface CKVAdminServiceConnection : NSObject <CKVAdminService> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CKVTaskManager *_taskManager;
    CCDataSiteManager *_dataSiteManager;
    CESRSpeechProfileSiteManager *_speechProfileSiteManager;
    SEMIndexSiteManager *_indexSiteManager;
    NSObject<CCDonateServiceProvider> *_serviceProvider;
    CKVTaskSettings *_settings;
}

- (void).cxx_destruct;
- (long long)_deleteUserExclusiveSitesWithUserId:(id)a0;
- (void)_donateProfile:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (void)_performMaintenance;
- (oneway void)beginEvaluation:(id)a0 clean:(BOOL)a1 completion:(id /* block */)a2;
- (oneway void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (void)clearAllState;
- (oneway void)deleteAllItemsWithUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)deleteAllItemsWithUserId:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)findProfileSnapshotsNearDate:(id)a0 completion:(id /* block */)a1;
- (oneway void)finishEventSimulation:(id /* block */)a0;
- (oneway void)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (id)initWithServiceQueue:(id)a0 taskManager:(id)a1 dataSiteManager:(id)a2 speechProfileSiteManager:(id)a3 indexSiteManager:(id)a4 serviceProvider:(id)a5;
- (oneway void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (oneway void)startEventSimulation:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)triggerMaintenance:(id /* block */)a0;
- (oneway void)triggerMigration:(BOOL)a0 completeAfterTrigger:(BOOL)a1 completion:(id /* block */)a2;

@end
