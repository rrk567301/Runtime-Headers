@interface APRKReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

- (void)stopNotifier;
- (BOOL)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (long long)currentReachabilityStatus;
- (void)dealloc;

@end
