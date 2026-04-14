@interface KHReachability : NSObject {
    struct __SCNetworkReachability { } *_reachability;
    unsigned long long _currentStatus;
}

+ (id)defaultOfflineError;
+ (id)defaultReachability;

- (void)dealloc;
- (unsigned long long)currentStatus;
- (id)init;
- (unsigned long long)_networkStatusForFlags:(unsigned int)a0;

@end
