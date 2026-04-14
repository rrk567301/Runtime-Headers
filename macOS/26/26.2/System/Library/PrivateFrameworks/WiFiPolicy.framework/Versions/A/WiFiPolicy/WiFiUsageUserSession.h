@interface WiFiUsageUserSession : WiFiUsageSession {
    BOOL _userInactive;
    BOOL _deviceLocked;
}

- (void)linkQualityDidChange:(id)a0;
- (void)lockStateDidChange:(BOOL)a0;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (id)metricName;
- (void)displayStateDidChange:(BOOL)a0;

@end
