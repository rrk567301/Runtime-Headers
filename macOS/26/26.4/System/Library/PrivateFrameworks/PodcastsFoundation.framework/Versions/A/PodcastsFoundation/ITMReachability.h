@interface ITMReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)a0;

- (BOOL)startNotifier;
- (BOOL)connectionRequired;
- (void)stopNotifier;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (void)dealloc;

@end
