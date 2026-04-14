@class Module, NSString, NSDictionary, LACCachedExternalizedContext, NSDate, NSMutableDictionary;

@interface ContextPlugin : NSObject <LACContextExternalizing, LAContextServerEvaluationProt, LACRemoteContextOwnership> {
    NSMutableDictionary *_internalOperationOptions;
}

@property (readonly, nonatomic) BOOL contextOwner;
@property (retain, nonatomic) NSDictionary *resultInfo;
@property (readonly, nonatomic) LACCachedExternalizedContext *cachedExternalizedContext;
@property (readonly, nonatomic) unsigned int instanceId;
@property (readonly, nonatomic) Module *module;
@property (readonly, nonatomic) void *underlyingPtr;
@property (readonly, nonatomic) NSDate *creationTime;
@property (readonly, nonatomic) BOOL disposable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)pluginWithExternalizedContext:(id)a0 reply:(id /* block */)a1;

- (void)setCredential:(id)a0 type:(long long)a1 options:(id)a2 originator:(id)a3 reply:(id /* block */)a4;
- (id)externalizedContext;
- (void)pauseProcessedEvent:(long long)a0 pause:(BOOL)a1 reply:(id /* block */)a2;
- (void)setShowingCoachingHint:(BOOL)a0 event:(long long)a1 originator:(id)a2 reply:(id /* block */)a3;
- (void)externalizedContextWithReply:(id /* block */)a0;
- (void)retryEvent:(long long)a0 originator:(id)a1 reply:(id /* block */)a2;
- (id)createInternalInfoWithPolicy:(long long)a0 policyOptions:(id)a1 request:(id)a2 originator:(id)a3;
- (void)evaluateRequest:(id)a0 uiDelegate:(id)a1 originator:(id)a2 reply:(id /* block */)a3;
- (void)checkCredentialSatisfied:(long long)a0 policy:(long long)a1 reply:(id /* block */)a2;
- (void)credentialsUUIDWithOriginator:(id)a0 reply:(id /* block */)a1;
- (void)isCredentialSet:(long long)a0 originator:(id)a1 reply:(id /* block */)a2;
- (id)createInternalInfo:(id)a0 skipCallerIdentification:(BOOL)a1 callerBundleId:(id)a2 request:(id)a3 originator:(id)a4;
- (void)evaluatePolicy:(long long)a0 options:(id)a1 uiDelegate:(id)a2 originator:(id)a3 request:(id)a4 reply:(id /* block */)a5;
- (void)evaluateACL:(id)a0 operation:(id)a1 options:(id)a2 uiDelegate:(id)a3 originator:(id)a4 request:(id)a5 reply:(id /* block */)a6;
- (void)resetEvent:(long long)a0 originator:(id)a1 reply:(id /* block */)a2;
- (void)verifyFileVaultUser:(id)a0 volumeUuid:(id)a1 options:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)authMethodWithReply:(id /* block */)a0;
- (void)setCredentialsUUID:(id)a0 originator:(id)a1 reply:(id /* block */)a2;
- (id)externalizationObserver;
- (void)credentialEncodingSeedWithReply:(id /* block */)a0;
- (void)setExternalizationObserver:(id)a0;
- (void)credentialOfType:(long long)a0 originator:(id)a1 reply:(id /* block */)a2;
- (id)initWithContextOwner:(BOOL)a0 underlyingPtr:(void *)a1 flags:(long long)a2 moduleRef:(id)a3;
- (void)setOptions:(id)a0 forInternalOperation:(long long)a1 originator:(id)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (void)optionsForInternalOperation:(long long)a0 originator:(id)a1 reply:(id /* block */)a2;
- (void)performOp:(id)a0 reply:(id /* block */)a1;

@end
