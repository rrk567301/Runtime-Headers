@interface WiFiUsageBatterySaveSession : WiFiUsageSession {
    BOOL _batterySaveMode;
}

- (id)initWithInterfaceName:(id)a0;
- (id)metricName;
- (void)updateWowState:(BOOL)a0 lpasState:(BOOL)a1 lowPowerState:(BOOL)a2 batterySaverState:(BOOL)a3;

@end
