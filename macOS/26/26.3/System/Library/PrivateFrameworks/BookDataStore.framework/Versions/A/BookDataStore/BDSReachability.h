@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityForLocalWiFi;
+ (BOOL)isOffline;
+ (id)reachabilityWithHostName:(id)a0;
+ (void)_updateIsOffline;

- (void)stopNotifier;
- (BOOL)connectionRequired;
- (int)currentReachabilityStatus;
- (int)networkStatusForFlags:(unsigned int)a0;
- (void)dealloc;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;

@end
