@class CESRSpeechProfileSiteManager, NSObject;
@protocol OS_dispatch_queue;

@interface CESRSpeechProfileAdminServiceConnection : NSObject <CESRSpeechProfileAdminService> {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    CESRSpeechProfileSiteManager *_speechProfileSiteManager;
}

- (void).cxx_destruct;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (void)_resetAllSpeechProfiles;
- (long long)_resetSpeechProfilesForPersonaId:(id)a0;
- (oneway void)beginEvaluationWithSetEnumerator:(id)a0 completion:(id /* block */)a1;
- (id)initWithServiceQueue:(id)a0 speechProfileSiteManager:(id)a1;
- (oneway void)rebuildSpeechProfilesForPersonaId:(id)a0 completion:(id /* block */)a1;

@end
