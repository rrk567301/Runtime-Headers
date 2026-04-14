@interface ITMReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForInternetConnection;

- (void)dealloc;
- (void)stopNotifier;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (BOOL)startNotifier;

@end
