@class NSString, NSMapTable, NSObject;
@protocol OS_os_log;

@interface MCNetworkController : NSObject {
    struct __SCDynamicStore { } *_store;
    struct __CFString { } *_dnsKey;
    id _domainLock;
    NSString *_domainName;
    NSMapTable *_reachabilityReferencesForWatchedAccounts;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, copy) NSString *domainName;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (long long)networkStatus;
+ (id)encodeAddressForIDNA:(id)a0 encodingHint:(unsigned long long)a1;
+ (id)applyIDNAToHostname:(id)a0 encode:(char)a1;
+ (char)hostnameIsFullyQualified:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startWatchingReachabilityForAccount:(id)a0;
- (void)stopWatchingReachabilityForAccount:(id)a0;
- (void)_queueNetworkChangeNotification;
- (void)_clearDomainName;
- (struct __SCNetworkReachability { } *)_newNetworkReachabilityReferenceForHostname:(id)a0;
- (void)_postNetworkChangeNotification;
- (id)_watchedAccounts;
- (char)isHostReachable:(id)a0 needToEstablishInternetConnection:(char *)a1;

@end
