@class NSNumber;

@interface ICReachability : NSObject {
    BOOL _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

@property (copy, nonatomic) NSNumber *overrideReachabilityStatus;

+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)reachabilityForLocalWiFi;
+ (id)sharedReachabilityForInternetConnection;
+ (id)reachabilityForInternetConnection;

- (void)dealloc;
- (void)stopNotifier;
- (long long)currentReachabilityStatus;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (BOOL)connectionRequired;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (BOOL)startNotifier;
- (void).cxx_destruct;

@end
