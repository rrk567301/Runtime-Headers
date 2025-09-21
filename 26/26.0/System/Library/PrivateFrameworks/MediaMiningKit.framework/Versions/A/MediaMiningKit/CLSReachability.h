@interface CLSReachability : NSObject {
    struct __SCNetworkReachability { } *_reachabilityRef;
    BOOL _localWiFiRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;

- (id)initWithNetworkReachability:(struct __SCNetworkReachability { } *)a0;
- (void)dealloc;
- (void)stopNotifier;
- (BOOL)connectionRequired;
- (BOOL)startNotifier;
- (long long)_localWiFiStatusForFlags:(unsigned int)a0;
- (long long)_networkStatusForFlags:(unsigned int)a0;
- (long long)currentNetworkStatus;

@end
