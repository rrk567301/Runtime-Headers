@class NSArray, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, IASAnalyticsTestingDelegateProtocol;

@interface IASAnalyticsServer : IAXPCProtocolObject <IASAnalyticsServerDelegateProtocol>

@property (nonatomic) BOOL isInternalBuild;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *sessionManagerClasses;
@property (retain, nonatomic) NSMutableArray *sessionManagers;
@property (retain, nonatomic) NSArray *dataStoreClasses;
@property (retain, nonatomic) NSMutableArray *dataStores;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (weak, nonatomic) id<IASAnalyticsTestingDelegateProtocol> testingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)getDateWithReply:(id /* block */)a0;
- (void)periodic24HourEvents;
- (void)reportStatus;
- (void)handleSessionManagerException:(id)a0 forSessionManager:(id)a1;
- (id)initWithEventHandler:(id /* block */)a0 testingDelegate:(id)a1 isInternalBuild:(BOOL)a2;
- (id)initializeSessionManagerOfClass:(Class)a0;
- (void)performBlockOnAllSessionManagersWithDebug:(id)a0 xpcObject:(id)a1 block:(id /* block */)a2;

@end
