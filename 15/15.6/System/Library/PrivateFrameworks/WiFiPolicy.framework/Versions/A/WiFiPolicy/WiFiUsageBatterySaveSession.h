@interface WiFiUsageBatterySaveSession : WiFiUsageSession {
    char _batterySaveMode;
}

- (id)metricName;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)updateWowState:(char)a0 lpasState:(char)a1 lowPowerState:(char)a2 batterySaverState:(char)a3;

@end
