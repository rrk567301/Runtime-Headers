@class WFMeasureResult, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WFMeasure : NSObject

@property (nonatomic) char isInProgress;
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
@property (nonatomic) char isPeriodicTest;
@property (nonatomic) char isSiriTimeout;
@property (nonatomic) char isApsdTimeout;
@property (nonatomic) char isRetest;
@property (nonatomic) char isParis;
@property (nonatomic) unsigned int tclass;
@property (retain, nonatomic) WFMeasureResult *result;

+ (char)isOnSupportedPlatform;

- (id)description;
- (void).cxx_destruct;
- (void)abort;
- (void)dispatchDNSTest:(id)a0;
- (void)dispatchPingTest:(unsigned long long)a0;
- (void)dispatchSiriTest:(long long)a0 trafficClass:(unsigned int)a1;
- (void)dispatchThroughputTest;
- (char)doDNSResolution:(id)a0 timeout:(long long)a1;
- (char)doPing:(id)a0 count:(long long)a1 timeout:(long long)a2 size:(long long)a3 class:(long long)a4 minRTT:(long long *)a5 maxRTT:(long long *)a6 successCount:(long long *)a7;
- (void)doThroughputTest;
- (unsigned int)getApsdSampleTrafficClass;
- (void)getLazyNSNumberPreference:(id)a0 exists:(id /* block */)a1;
- (void)getLazyNSStringPreference:(id)a0 exists:(id /* block */)a1;
- (unsigned int)getPeriodicSampleTrafficClass;
- (unsigned int)getTimeoutSampleTrafficClass;
- (id)initWithType:(unsigned long long)a0 andReason:(id)a1 prevTestedOptions:(unsigned long long)a2 andInterfaceName:(id)a3;
- (void)retrieveNetworkConfigurations;
- (char)shouldApsdSampleSiriTCP;
- (char)shouldApsdSampleSiriTLS;
- (char)shouldPeriodicSampleSiriTCP;
- (char)shouldPeriodicSampleSiriTLS;
- (char)shouldTimeoutSampleSiriTCP;
- (char)shouldTimeoutSampleSiriTLS;
- (char)start:(id /* block */)a0 withCompletionQueue:(id)a1;

@end
