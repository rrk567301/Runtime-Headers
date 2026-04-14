@interface SensorAccessIndicator : NSObject {
    void /* unknown type, empty encoding */ logger;
}

+ (BOOL)secureIndicatorPolicyEnforced;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getRemainingTimeThrowsAndReturnError:(id *)a0;

@end
