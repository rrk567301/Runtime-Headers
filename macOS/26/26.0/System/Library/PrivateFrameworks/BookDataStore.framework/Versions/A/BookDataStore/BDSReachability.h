@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForInternetConnection;
+ (BOOL)isOffline;
+ (void)_updateIsOffline;

- (void)dealloc;
- (void)stopNotifier;
- (int)currentReachabilityStatus;
- (int)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;

@end
