@class NSMutableDictionary, NSXPCConnection, NSString, PMPowerMitigationSession, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface PMPowerMitigations : NSObject <PMPowerMitigationsObservable, PMPowerMitigationsServiceCallbackProtocol>

@property (retain) NSMutableDictionary *observersByClientId;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;
@property BOOL connectionInterrupted;
@property (retain) PMPowerMitigationSession *currentMitigationSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forClientIdentifier:(id)a1;
- (void)configureConnectionInterruptionHandler;
- (void)configureConnectionInvalidationHandler;
- (void)configureConnectionReconnectionOnServiceRestart;
- (id)copyCurrentMitigationInfoForClientIdentifier:(id)a0;
- (void)didUpdateToMitigation:(id)a0 fromMitigation:(id)a1;
- (id)getCurrentMitigationInfoForClientIdentifier:(id)a0;
- (void)initConnectionToService;
- (id)newMitigationInfoForClientIdentifier:(id)a0;
- (void)registerForMitigationUpdates;
- (void)removeObserver:(id)a0 forClientIdentifier:(id)a1;

@end
