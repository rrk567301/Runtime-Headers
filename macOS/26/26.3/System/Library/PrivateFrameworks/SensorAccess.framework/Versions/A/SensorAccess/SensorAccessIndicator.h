@interface SensorAccessIndicator : NSObject {
    void /* unknown type, empty encoding */ logger;
}

+ (BOOL)secureIndicatorPolicyEnforced;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getRemainingTimeThrowsAndReturnError:(id *)a0;

@end
