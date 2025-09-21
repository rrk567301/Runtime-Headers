@interface GKReachability : NSObject {
    char localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (char)_gkIsOnline;
+ (id)_gkReachabilityForInternetConnection;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;

- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (int)networkStatusForFlags:(unsigned int)a0;
- (void)_gkStopNotifier;
- (int)_gkCurrentReachabilityStatus;
- (char)_gkStartNotifier;

@end
