@interface _TtC14CoreBrightnessP33_9170F47CDD268923AB17796AB14DFB3127CBPowerManagementClientImpl : NSObject <CBPowerManagementClient> {
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ clientId;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ lastBudget;
    void /* unknown type, empty encoding */ override;
    void /* unknown type, empty encoding */ controlRange;
    void /* unknown type, empty encoding */ callback;
}

- (void)unregister;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyLastBudget;
- (float)minBudget:(id)a0;
- (BOOL)registerWithControlRange:(struct CBClosedRange { float x0; float x1; })a0 andCallback:(id /* block */)a1;
- (void)requestBudget:(float)a0;

@end
