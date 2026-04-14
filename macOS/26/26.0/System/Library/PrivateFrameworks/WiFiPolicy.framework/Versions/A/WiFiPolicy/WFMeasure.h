@class NPTPerformanceTest, NSString, WFMeasureResult, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WFMeasure : NSObject

@property (nonatomic) BOOL isInProgress;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSString *gatewayAddress;
@property (retain, nonatomic) NSMutableSet *dnsServers;
@property (retain, nonatomic) NSString *publicDNSAddress;
@property (retain, nonatomic) NSString *testDNSHostname;
@property (retain, nonatomic) NSString *testReason;
@property (nonatomic) BOOL isPeriodicTest;
@property (nonatomic) BOOL isSiriTimeout;
@property (nonatomic) BOOL isApsdTimeout;
@property (nonatomic) BOOL isRetest;
@property (nonatomic) BOOL isParis;
@property (nonatomic) int tclass;
@property (retain, nonatomic) NPTPerformanceTest *performanceTest;
@property (retain, nonatomic) WFMeasureResult *result;

+ (BOOL)supportsLinkRecoveryTests;

- (void)abort;
- (void)getLazyNSNumberPreference:(id)a0 exists:(id /* block */)a1;
- (void)initializePerformanceTest;
- (BOOL)doPing:(id)a0 count:(long long)a1 timeout:(long long)a2 size:(long long)a3 class:(long long)a4 minRTT:(long long *)a5 maxRTT:(long long *)a6 successCount:(long long *)a7;
- (BOOL)doDNSResolution:(id)a0 timeout:(long long)a1;
- (BOOL)shouldApsdSampleSiriTLS;
- (unsigned int)getApsdSampleTrafficClass;
- (int)getTimeoutSampleTrafficClass;
- (BOOL)shouldTimeoutSampleSiriTCP;
- (void)dispatchSiriTest:(long long)a0 trafficClass:(unsigned int)a1;
- (void)dispatchPingTest:(unsigned long long)a0;
- (BOOL)start:(id /* block */)a0 withCompletionQueue:(id)a1;
- (void)dispatchULThroughputTest;
- (BOOL)shouldPeriodicSampleSiriTLS;
- (BOOL)shouldTimeoutSampleSiriTLS;
- (id)description;
- (void)dispatchDNSTest:(id)a0;
- (id)initWithType:(unsigned long long)a0 andReason:(id)a1 prevTestedOptions:(unsigned long long)a2 andInterfaceName:(id)a3;
- (BOOL)shouldApsdSampleSiriTCP;
- (void)getLazyNSStringPreference:(id)a0 exists:(id /* block */)a1;
- (void)doThroughputTest;
- (void)dispatchThroughputTest;
- (BOOL)shouldPeriodicSampleSiriTCP;
- (void)doULThroughputTest;
- (void).cxx_destruct;
- (unsigned int)getPeriodicSampleTrafficClass;
- (void)retrieveNetworkConfigurations;

@end
