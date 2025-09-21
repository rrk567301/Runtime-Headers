@class NSString, NSObject;
@protocol OS_os_log;

@interface RateLimiter : NSObject {
    unsigned int _style;
    NSString *_name;
    unsigned int _tokenBucketSize;
    double _tokenBucketCfgRefreshInterval;
    double _tokenBucketCfgIntervalBias;
    double _tokenBucketIntervalBias;
    double _tokenBucketInterval;
    double _lastConsumed;
    char _configured;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (char)setConfiguration:(id)a0;
- (id)getState;
- (void)_restoreDefaults;
- (void)_restoreTokenBucketDefaults;
- (char)_setTokenBucketConfiguration:(id)a0;
- (void)_setTokenBucketDerivedValues;
- (double)_tokenBucketAcquireHelper:(char)a0;
- (char)_tokenBucketResetWithRelativeStartTime:(double)a0;
- (double)checkAcquire;
- (char)resetWithRelativeStartTime:(double)a0;
- (double)tryAcquire;

@end
