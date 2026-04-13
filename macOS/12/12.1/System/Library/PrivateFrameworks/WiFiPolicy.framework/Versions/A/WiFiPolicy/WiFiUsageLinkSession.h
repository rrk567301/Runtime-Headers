@class NSDate;

@interface WiFiUsageLinkSession : WiFiUsageSession {
    BOOL _linkUp;
    NSDate *_lastLinkTest;
    NSDate *_lastFaultIndicationTime;
}

- (void).cxx_destruct;
- (id)initWithInterfaceName:(id)a0;
- (id)metricName;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)performLinkTestFor:(id)a0;
- (void)lockStateDidChange:(BOOL)a0;
- (void)displayStateDidChange:(BOOL)a0;
- (void)applicationStateDidChange:(id)a0 withAttributes:(id)a1;
- (void)faultEventDetected:(unsigned long long)a0;

@end
