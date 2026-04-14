@interface WiFiUsageApplicationSession : WiFiUsageSession

- (id)metricName;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)applicationStateDidChange:(id)a0 withAttributes:(id)a1;

@end
