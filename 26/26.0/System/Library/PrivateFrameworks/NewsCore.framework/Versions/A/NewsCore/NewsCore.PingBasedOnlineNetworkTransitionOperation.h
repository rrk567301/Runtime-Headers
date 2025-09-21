@interface NewsCore.PingBasedOnlineNetworkTransitionOperation : FCOperation {
    void /* unknown type, empty encoding */ log;
    void /* unknown type, empty encoding */ pingInterval;
    void /* unknown type, empty encoding */ pingTimeoutInterval;
    void /* unknown type, empty encoding */ hostName;
    void /* unknown type, empty encoding */ port;
    void /* unknown type, empty encoding */ notificationBlock;
    void /* unknown type, empty encoding */ probeLock;
    void /* unknown type, empty encoding */ probe;
}

@property (nonatomic, readonly) unsigned long long maxRetries;

- (void)performOperation;
- (void)resetForRetry;
- (void)cancel;
- (id)init;
- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (void).cxx_destruct;

@end
