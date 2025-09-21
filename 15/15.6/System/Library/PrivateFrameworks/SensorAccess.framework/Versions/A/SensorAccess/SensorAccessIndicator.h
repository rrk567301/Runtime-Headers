@interface SensorAccessIndicator : NSObject {
    void /* unknown type, empty encoding */ logger;
}

+ (char)secureIndicatorPolicyEnforced;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getRemainingTimeThrowsAndReturnError:(id *)a0;

@end
