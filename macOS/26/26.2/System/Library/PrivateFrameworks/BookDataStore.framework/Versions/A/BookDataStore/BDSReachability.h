@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (BOOL)isOffline;
+ (id)reachabilityForInternetConnection;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (void)_updateIsOffline;

- (void)stopNotifier;
- (BOOL)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)a0;
- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (int)currentReachabilityStatus;
- (void)dealloc;

@end
