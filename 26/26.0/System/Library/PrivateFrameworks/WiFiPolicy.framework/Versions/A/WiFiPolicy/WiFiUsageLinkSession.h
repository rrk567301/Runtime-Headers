@class WiFiSoftError, NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface WiFiUsageLinkSession : WiFiUsageSession {
    BOOL _linkUp;
    NSDate *_lastLinkTest;
    NSDate *_lastFaultIndicationTime;
    BOOL _didBecomePrimary;
    NSString *_ssid;
    NSString *_bssid;
    unsigned long long _numLinkTestFailures;
    BOOL _didHandleFaultEvent;
    BOOL _foundSuccessfulLinkTest;
    unsigned long long _numLinkRecoverySkips;
    unsigned long long _periodicLinkTestInterval;
    NSDate *_lastFaultEventHandled;
    NSString *_lastFaultEventHandledReason;
    unsigned long long _lastFaultEventHandledOptions;
    int _band;
    NSMutableDictionary *_linkTestResult;
    unsigned long long _joinSeqNo;
    NSMutableArray *_deferredFailureSessions;
    unsigned long long _lastSubmittedSessionSeqNo;
    BOOL _joinAttemptedBeforeLinkDown;
    unsigned long long _faultCountOnBss;
}

@property (retain, nonatomic) WiFiSoftError *joinFailSoftError;
@property (retain, nonatomic) WiFiSoftError *faultEventSoftError;

- (void)rangingCompleted;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)displayStateDidChange:(BOOL)a0;
- (void)linkQualityDidChange:(id)a0;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (BOOL)useSavedJoinStats;
- (void)interfaceRankingDidChange:(BOOL)a0;
- (void)processDriverAvailability:(id)a0 available:(BOOL)a1 version:(unsigned long long)a2 flags:(unsigned long long)a3 eventID:(unsigned long long)a4 reason:(long long)a5 subReason:(long long)a6 minorReason:(long long)a7 reasonString:(id)a8;
- (void)applicationStateDidChange:(id)a0 withAttributes:(id)a1;
- (void)lockStateDidChange:(BOOL)a0;
- (void)faultEventDetected:(unsigned long long)a0 event:(id)a1;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;
- (void)processIPv6Changes:(id)a0;
- (void)processIPv4Changes:(id)a0;
- (void)updateLinkRecoveryDisabled:(BOOL)a0;
- (id)metricName;
- (void)processDHCPChanges:(id)a0;
- (void)getLazyNSNumberPreference:(id)a0 exists:(id /* block */)a1;
- (void)performLinkTestFor:(id)a0 isTriggeredByFault:(BOOL)a1;
- (void)addDictionary:(id)a0 withKeysPrefix:(id)a1 toFlatDictionary:(id)a2;
- (void)handleFaultEventWithReason:(id)a0;
- (void)retryLinkTestInOneMinute;
- (void)updateLinkTestInterval:(unsigned long long)a0;
- (void).cxx_destruct;

@end
