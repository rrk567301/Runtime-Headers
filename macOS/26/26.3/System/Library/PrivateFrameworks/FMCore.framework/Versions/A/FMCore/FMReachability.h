@interface FMReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithHostName:(id)a0;

- (void)stopNotifier;
- (BOOL)connectionRequired;
- (unsigned long long)currentReachabilityStatus;
- (unsigned long long)networkStatusForFlags:(unsigned int)a0;
- (void)dealloc;
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;

@end
