@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _OSIBatteryLifeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) int notifyTestToken;
@property (nonatomic) int notifyToken;
@property (retain, nonatomic) NSMutableDictionary *clientToHandler;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)mitigationWithError:(id *)a0;
- (void)overrideAllMitigations:(unsigned long long)a0;
- (void)overrideCLPCMitigations:(unsigned long long)a0;
- (void)registerForDrainLevelPredictionForClient:(id)a0 withithUpdateHandler:(id /* block */)a1;

@end
