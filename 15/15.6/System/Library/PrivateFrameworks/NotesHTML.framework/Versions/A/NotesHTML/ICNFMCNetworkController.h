@class NSString, NSMapTable;

@interface ICNFMCNetworkController : NSObject {
    struct __SCDynamicStore { } *_store;
    struct __CFString { } *_dnsKey;
    id _domainLock;
    NSString *_domainName;
    NSMapTable *_reachabilityReferencesForWatchedAccounts;
}

@property (readonly, copy) NSString *domainName;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (long long)networkStatus;
+ (char)domain:(id)a0 isSubdomainOfDomain:(id)a1;
+ (id)encodeAddressForIDNA:(id)a0 encodingHint:(unsigned long long)a1;
+ (id)applyIDNAToHostname:(id)a0 encode:(char)a1;
+ (char)hostnameIsFullyQualified:(id)a0;
+ (id)baseDomainsForDomains:(id)a0;
+ (id)filteredDomainNamesFromHost:(id)a0;
+ (id)filteredIPAddressesFromHost:(id)a0;
+ (id)getHostUUIDString;
+ (id)subnetForIPAddress:(id)a0;

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
