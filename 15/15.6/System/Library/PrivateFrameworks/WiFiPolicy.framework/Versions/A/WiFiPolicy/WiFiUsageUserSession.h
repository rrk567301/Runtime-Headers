@interface WiFiUsageUserSession : WiFiUsageSession {
    char _userInactive;
    char _deviceLocked;
}

- (id)metricName;
- (void)displayStateDidChange:(char)a0;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)linkQualityDidChange:(id)a0;
- (void)lockStateDidChange:(char)a0;

@end
