@interface ATXPowerThrottlingCreditPool : NSObject {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ queue;
}

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)consumeCredits:(long long)a0 toRun:(id /* block */)a1;

@end
