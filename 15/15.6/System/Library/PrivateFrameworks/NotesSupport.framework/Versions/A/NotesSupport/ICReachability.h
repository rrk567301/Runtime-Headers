@class NSNumber;

@interface ICReachability : NSObject {
    char _alwaysReturnLocalWiFiStatus;
    struct __SCNetworkReachability { } *_reachabilityRef;
}

@property (copy, nonatomic) NSNumber *overrideReachabilityStatus;

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0;
+ (id)reachabilityWithHostName:(id)a0;
+ (id)sharedReachabilityForInternetConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (char)connectionRequired;
- (long long)currentReachabilityStatus;
- (long long)localWiFiStatusForFlags:(unsigned int)a0;
- (long long)networkStatusForFlags:(unsigned int)a0;
- (char)startNotifier;
- (void)stopNotifier;

@end
