@interface FMReachability : NSObject {
    char localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;

- (void)dealloc;
- (char)connectionRequired;
- (unsigned long long)currentReachabilityStatus;
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)a0;
- (unsigned long long)networkStatusForFlags:(unsigned int)a0;
- (char)startNotifier;
- (void)stopNotifier;

@end
