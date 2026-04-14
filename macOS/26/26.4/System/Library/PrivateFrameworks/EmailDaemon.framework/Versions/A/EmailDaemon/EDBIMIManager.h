@class NSString, EDMessagePersistence, EMRemoteContentURLSession, ECDNSClient, NSMutableDictionary, NSConditionLock, EDPersistenceHookRegistry, EDMarkCertificateVerifier;
@protocol EFScheduler;

@interface EDBIMIManager : NSObject <EDMessageChangeHookResponder> {
    NSMutableDictionary *_activeDataTasksByRequest;
    NSConditionLock *_activeDataTasksLock;
    NSConditionLock *_verificationRunningLock;
}

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, nonatomic) ECDNSClient *dnsClient;
@property (readonly, nonatomic) EDMarkCertificateVerifier *markCertificateVerifier;
@property (readonly, nonatomic) id<EFScheduler> verificationScheduler;
@property (readonly, copy, nonatomic) NSString *pendingAuthenticationChangesKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)processBIMIForMessages:(id)a0 evidenceAndMessagesNeedingVerification:(id *)a1;
- (id)initWithMessagePersistence:(id)a0 urlSession:(id)a1 hookRegistry:(id)a2;
- (void)downloadAndVerifyIndicatorsIfNeeded;
- (void).cxx_destruct;
- (void)test_tearDown;
- (void)persistenceWillUpdateAuthenticationStateForMessages:(id)a0;
- (void)persistenceDidUpdateAuthenticationStateForMessages:(id)a0;
- (void)dealloc;

@end
