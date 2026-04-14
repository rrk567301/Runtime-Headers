@interface WiFiUsageDeviceSession : WiFiUsageSession {
    BOOL _firstDisplayOn;
}

- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)displayStateDidChange:(BOOL)a0;
- (void)linkQualityDidChange:(id)a0;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;
- (id)metricName;

@end
