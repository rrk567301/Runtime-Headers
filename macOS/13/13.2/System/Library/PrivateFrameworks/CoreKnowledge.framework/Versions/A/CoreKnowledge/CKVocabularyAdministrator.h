@class NSObject;
@protocol OS_dispatch_queue, CKVAdminService;

@interface CKVocabularyAdministrator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    double _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;
+ (id)makeAdministrator;

- (id)init;
- (void).cxx_destruct;
- (void)triggerMaintenance:(id /* block */)a0;
- (void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (void)rebuildSpeechProfileForUserId:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllItemsWithUserId:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllItemsWithUserId:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)endEvaluation:(id /* block */)a0;
- (id)initWithAdminService:(id)a0 queue:(id)a1;
- (id)initWithAdminService:(id)a0 timeout:(double)a1 queue:(id)a2;
- (void)triggerMigration:(id /* block */)a0;
- (void)triggerMigration:(BOOL)a0 completion:(id /* block */)a1;
- (void)_triggerMigration:(BOOL)a0 completeAfterTrigger:(BOOL)a1 completion:(id /* block */)a2;
- (void)captureVocabularySnapshot:(id /* block */)a0;
- (id)simulateEventHandling:(BOOL)a0;
- (id)rawSpeechProfileConverter;
- (id)rawSpeechProfileConverterOmittingItemTypes:(id)a0;
- (void)beginEvaluation:(id)a0 options:(unsigned short)a1 completion:(id /* block */)a2;
- (void)executeEvaluationTask:(unsigned short)a0 completion:(id /* block */)a1;

@end
