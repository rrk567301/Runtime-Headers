@class WiFiSoftError, NSString, NSMutableDictionary, NSDate, NSMutableArray;

@interface WiFiUsageLinkSession : WiFiUsageSession {
    char _linkUp;
    NSDate *_lastLinkTest;
    NSDate *_lastFaultIndicationTime;
    char _didBecomePrimary;
    NSString *_ssid;
    NSString *_bssid;
    unsigned long long _numLinkTestFailures;
    char _didHandleFaultEvent;
    char _foundSuccessfulLinkTest;
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
    char _joinAttemptedBeforeLinkDown;
}

@property (retain, nonatomic) WiFiSoftError *joinFailSoftError;

- (void).cxx_destruct;
- (id)metricName;
- (void)addDictionary:(id)a0 withKeysPrefix:(id)a1 toFlatDictionary:(id)a2;
- (void)applicationStateDidChange:(id)a0 withAttributes:(id)a1;
- (void)displayStateDidChange:(char)a0;
- (void)faultEventDetected:(unsigned long long)a0;
- (void)getLazyNSNumberPreference:(id)a0 exists:(id /* block */)a1;
- (void)handleFaultEventWithReason:(id)a0;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)interfaceRankingDidChange:(char)a0;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (void)linkQualityDidChange:(id)a0;
- (void)linkStateDidChange:(char)a0 isInvoluntary:(char)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)lockStateDidChange:(char)a0;
- (void)performLinkTestFor:(id)a0 isTriggeredByFault:(char)a1;
- (void)processDHCPChanges:(id)a0;
- (void)processDriverAvailability:(id)a0 available:(char)a1 version:(unsigned long long)a2 flags:(unsigned long long)a3 eventID:(unsigned long long)a4 reason:(long long)a5 subReason:(long long)a6 minorReason:(long long)a7 reasonString:(id)a8;
- (void)processIPv4Changes:(id)a0;
- (void)processIPv6Changes:(id)a0;
- (void)rangingCompleted;
- (void)retryLinkTestInOneMinute;
- (void)systemWakeStateDidChange:(char)a0 wokenByWiFi:(char)a1;
- (void)updateLinkRecoveryDisabled:(char)a0;
- (void)updateLinkTestInterval:(unsigned long long)a0;
- (char)useSavedJoinStats;

@end
