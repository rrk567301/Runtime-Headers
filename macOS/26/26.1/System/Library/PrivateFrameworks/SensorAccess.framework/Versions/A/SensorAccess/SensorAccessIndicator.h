@interface SensorAccessIndicator : NSObject {
    void /* unknown type, empty encoding */ logger;
}

+ (BOOL)secureIndicatorPolicyEnforced;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)getRemainingTimeThrowsAndReturnError:(id *)a0;

@end
