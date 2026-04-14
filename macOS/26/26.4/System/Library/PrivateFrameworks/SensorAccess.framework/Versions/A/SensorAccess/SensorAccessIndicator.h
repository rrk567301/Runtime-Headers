@interface SensorAccessIndicator : NSObject {
    void /* unknown type, empty encoding */ logger;
}

+ (BOOL)secureIndicatorPolicyEnforced;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)getRemainingTimeThrowsAndReturnError:(id *)a0;

@end
