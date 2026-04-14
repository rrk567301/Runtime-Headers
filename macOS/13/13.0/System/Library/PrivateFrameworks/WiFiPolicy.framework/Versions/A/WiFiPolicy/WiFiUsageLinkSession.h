@class NSDate;

@interface WiFiUsageLinkSession : WiFiUsageSession {
    BOOL _linkUp;
    NSDate *_lastLinkTest;
    NSDate *_lastFaultIndicationTime;
}

- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (id)metricName;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4 whileCompatibilityMode:(BOOL)a5;
- (void)lockStateDidChange:(BOOL)a0;
- (void)displayStateDidChange:(BOOL)a0 whileCompatibilityMode:(BOOL)a1;
- (void)applicationStateDidChange:(id)a0 withAttributes:(id)a1;
- (void)faultEventDetected:(unsigned long long)a0;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;
- (void)processIPv4Changes:(id)a0;
- (void)processIPv6Changes:(id)a0;
- (void)processDHCPChanges:(id)a0;
- (void)rangingCompleted;
- (void)processDriverAvailability:(id)a0 available:(unsigned long long)a1 version:(unsigned long long)a2 flags:(unsigned long long)a3 eventID:(unsigned long long)a4 reason:(unsigned long long)a5 subReason:(unsigned long long)a6 minorReason:(unsigned long long)a7 reasonString:(id)a8;
- (void)performLinkTestFor:(id)a0;

@end
