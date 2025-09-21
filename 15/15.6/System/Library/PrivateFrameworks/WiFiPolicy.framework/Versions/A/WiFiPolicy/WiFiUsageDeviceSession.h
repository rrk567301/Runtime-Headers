@interface WiFiUsageDeviceSession : WiFiUsageSession {
    char _firstDisplayOn;
}

- (id)metricName;
- (void)displayStateDidChange:(char)a0;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)linkQualityDidChange:(id)a0;
- (void)systemWakeStateDidChange:(char)a0 wokenByWiFi:(char)a1;

@end
