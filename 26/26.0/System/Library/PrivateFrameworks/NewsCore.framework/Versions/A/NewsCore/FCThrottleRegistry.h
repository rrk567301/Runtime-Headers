@interface FCThrottleRegistry : NSObject {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ maxRetryAfter;
}

@property (class, nonatomic, readonly) FCThrottleRegistry *shared;

- (id)init;
- (void).cxx_destruct;
- (void)processError:(id)a0 forGroup:(id)a1;
- (void)processURLResponse:(id)a0 forGroup:(id)a1;
- (BOOL)shouldThrottleGroup:(id)a0 outRetryAfter:(double *)a1;
- (void)throttleGroup:(id)a0 retryAfter:(double)a1;

@end
