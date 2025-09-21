@interface APRKReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;

- (void)dealloc;
- (char)connectionRequired;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (char)startNotifier;
- (void)stopNotifier;

@end
