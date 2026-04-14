@interface WiFiUsageUserSession : WiFiUsageSession {
    BOOL _userInactive;
    BOOL _deviceLocked;
}

- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)displayStateDidChange:(BOOL)a0;
- (void)linkQualityDidChange:(id)a0;
- (void)lockStateDidChange:(BOOL)a0;
- (id)metricName;

@end
