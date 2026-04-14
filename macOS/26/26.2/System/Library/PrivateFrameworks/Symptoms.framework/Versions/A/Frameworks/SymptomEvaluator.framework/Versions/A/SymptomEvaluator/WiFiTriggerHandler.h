@class ManagedEventHandler, NSString, NSArray, DecisionDetails, NSDate, DataStallHandler;

@interface WiFiTriggerHandler : NSObject <ConfigurableObjectProtocol, SyndromeHandlerProtocol, ManagedEventInfoProtocol, DataStallHandlerDelegate> {
    NSString *_syndromeName;
    char *_syndromeUTF8Name;
    ManagedEventHandler *_eventHandler;
    double _lastReportTime;
    NSString *_baseName;
    float _baseRTTAvg;
    float _baseRTTVar;
    float _baseRTTMin;
    float _newRTTAvg;
    float _newRTTVar;
    NSDate *_RTTTimestamp;
    id _wifiEpochObserver;
    id _cellEpochObserver;
    id _primaryInterfaceObserver;
    DecisionDetails *_detailsAwaitingRefuter;
    NSArray *_baselineDefaultRouteData;
    NSDate *_baselineDefaultRouteTimestamp;
    int _refuterAcitvationId;
    long long _lastRefutePeriodTraffic;
    double _lastRefutePeriodDuration;
    NSDate *_lastRefutePeriodTimestamp;
    DataStallHandler *_dataStallHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)_triggerAllowedByRSSI:(BOOL)a0 receiptTimestamp:(id)a1;
+ (id)getHandlerByName:(id)a0;
+ (void)triggerAllowedByRSSI:(BOOL)a0 receiptTimestamp:(id)a1;
+ (id)configureClass:(id)a0;
+ (id)getNetScoreInfo;

- (id)_getDNSInfo;
- (id)_getAWDInfo:(id)a0;
- (id)_getND6Info;
- (long long)_getARPFailureCount;
- (long long)_getDataStallsScore;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (int)configureInstance:(id)a0;
- (void)checkUniqueStallCountOnInterfaceType:(long long)a0 stallType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_getARPInfo;
- (void)dampeningStage:(id)a0;
- (int)combineScoreARP:(int)a0 ND6:(int)a1 DNS:(int)a2 RTT:(int)a3 flows:(int)a4;
- (int)read:(id)a0 returnedValues:(id)a1;
- (long long)_getND6FailureCount;
- (int)_impactFromFlags:(unsigned int)a0 andFlows:(unsigned long long)a1;
- (id)init;
- (BOOL)noteSymptom:(id)a0;
- (void)_reset;
- (void)refuteStage:(id)a0;
- (void)didReceiveSyndrome:(id)a0;
- (BOOL)insufficientRxTrafficDetectedFrom:(id)a0 atTime:(id)a1 To:(id)a2;
- (id)_getNetScoreInfo;

@end
