@class NSString, CESRSpeechProfileAdminXPCServiceBridge;

@interface CESRSpeechProfileAdminXPCServiceWrapper : NSObject <CESRSpeechProfileAdminServiceProvider, CESRSpeechProfileAdminService> {
    CESRSpeechProfileAdminXPCServiceBridge *_xpcServiceBridge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)adminService;
- (oneway void)endEvaluation:(id /* block */)a0;
- (oneway void)triggerMaintenance:(BOOL)a0 completion:(id /* block */)a1;
- (id)_serviceProxyWithCompletion:(id /* block */)a0;
- (oneway void)beginEvaluationWithSetEnumerator:(id)a0 completion:(id /* block */)a1;
- (oneway void)rebuildSpeechProfilesForPersonaId:(id)a0 completion:(id /* block */)a1;

@end
