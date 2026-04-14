@class NSString, NSXPCConnection, AFHearablesClientRegistry, NSObject;
@protocol OS_dispatch_queue, AFHearablesExperienceManagerProtocol, AFHearablesExperienceManagerInternalDelegate;

@interface AFHearablesExperienceManager : NSObject <AFHearablesExperienceManagerProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<AFHearablesExperienceManagerInternalDelegate> internalDelegate;
@property (retain, nonatomic) AFHearablesClientRegistry *clientRegistry;
@property (retain, nonatomic) id<AFHearablesExperienceManagerProtocol> serviceAdapter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue;
@property (readonly, copy, nonatomic) NSString *instanceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (BOOL)_isRunningInAssistantd;

- (void)_setupXPCConnection;
- (void).cxx_destruct;
- (id)init;
- (id)_remoteObjectProxy;
- (void)dealloc;
- (void)addGestureObserver:(id)a0 forContexts:(unsigned long long)a1;
- (void)_handleGestureWithResponse:(id)a0;
- (BOOL)_hasHandlersForContexts:(unsigned long long)a0;
- (void)_notifyObserversDidChangeActiveGestureContexts:(unsigned long long)a0 added:(unsigned long long)a1 removed:(unsigned long long)a2 reason:(long long)a3;
- (void)_setInternalDelegate:(id)a0;
- (void)_setupBackendAdapter;
- (BOOL)_shouldUseInternalDelegate;
- (void)_updateBackendWithAggregatedGestureContexts;
- (void)didChangeActiveGestureContexts:(unsigned long long)a0 added:(unsigned long long)a1 removed:(unsigned long long)a2 reason:(long long)a3;
- (void)didRecognizeHeadGestureResponse:(id)a0;
- (void)prewarmGestureRecognitionForContexts:(unsigned long long)a0;
- (void)removeGestureObserver:(id)a0;
- (void)removeGestureObserver:(id)a0 forContexts:(unsigned long long)a1;
- (void)startExpectingGestureRecognitionForContexts:(unsigned long long)a0;
- (void)startExpectingShakeToDismiss:(BOOL)a0;
- (void)startGestureRequestForResponse:(id)a0 withCompletion:(id /* block */)a1;
- (void)stopExpectingGestureRecognitionForContexts:(unsigned long long)a0 reason:(long long)a1;

@end
