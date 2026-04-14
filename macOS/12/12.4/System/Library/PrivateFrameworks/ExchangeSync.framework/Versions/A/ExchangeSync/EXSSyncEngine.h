@class NSArray, NSMutableDictionary, EXSAccountManager, NSObject, EXSDataManager;
@protocol OS_dispatch_workloop;

@interface EXSSyncEngine : NSObject

@property (nonatomic) BOOL shouldStayRunning;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *dispatchWorkloop;
@property (retain, nonatomic) EXSAccountManager *accountManager;
@property (retain, nonatomic) NSArray *dataConsumerPlugins;
@property (retain, nonatomic) NSMutableDictionary *syncEngineInstances;
@property (readonly, nonatomic) EXSDataManager *dataManager;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (void)accountChanged:(id)a0;
- (void)startup;
- (void)immediatelySync;
- (void)evaluateOurNeedToRun;
- (void)loadDataConsumerPlugins;
- (void)loadDataConsumerPlugins:(id)a0;
- (void)accountStartup:(id)a0 isNewAccount:(BOOL)a1;
- (void)accountShutdown:(id)a0 isRemovedAccount:(BOOL)a1;
- (void)runMaintenanceActivities;

@end
