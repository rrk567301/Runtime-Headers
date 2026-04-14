@interface BDSReachability : NSObject {
    BOOL localWiFiRef;
    struct __SCNetworkReachability { } *reachabilityRef;
}

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (BOOL)isOffline;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithHostName:(id)a0;
+ (void)_updateIsOffline;

- (int)localWiFiStatusForFlags:(unsigned int)a0;
- (int)currentReachabilityStatus;
- (int)networkStatusForFlags:(unsigned int)a0;
- (void)dealloc;
- (BOOL)connectionRequired;
- (BOOL)startNotifier;
- (void)stopNotifier;

@end
