@interface BRCRetryCounter : NSObject {
    BOOL _scheduled;
}

@property (readonly, nonatomic) unsigned int retryCount;
@property (readonly, nonatomic) long long latestRetry;
@property (readonly, nonatomic) long long throttleHash;

- (void)schedule;
- (id)initWithThrottleHash:(long long)a0;
- (void)incrementRetry;

@end
