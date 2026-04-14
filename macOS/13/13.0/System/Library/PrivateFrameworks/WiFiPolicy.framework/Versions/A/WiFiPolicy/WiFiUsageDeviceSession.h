@interface WiFiUsageDeviceSession : WiFiUsageSession {
    BOOL _firstDisplayOn;
}

- (id)initWithInterfaceName:(id)a0;
- (id)metricName;
- (void)displayStateDidChange:(BOOL)a0 whileCompatibilityMode:(BOOL)a1;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1 whileCompatibilityMode:(BOOL)a2;

@end
