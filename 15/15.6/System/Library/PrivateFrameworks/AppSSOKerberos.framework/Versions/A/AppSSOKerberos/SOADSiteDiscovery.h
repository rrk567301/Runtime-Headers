@class NSString, NSOperationQueue, SODNSSRVQuery;

@interface SOADSiteDiscovery : NSObject

@property (retain, nonatomic) NSString *realm;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain) SODNSSRVQuery *dns;

- (void).cxx_destruct;
- (void)discoverADInfoUsingSourceAppBundleIdentifier:(id)a0 auditTokenData:(id)a1 requireTLSForLDAP:(char)a2 withCompletion:(id /* block */)a3;
- (id)initWithRealm:(id)a0;
- (void)performLDAPPingUsingSite:(id)a0 bundleIdentifier:(id)a1 auditTokenData:(id)a2 requireTLSForLDAP:(char)a3 inBackground:(char)a4 completion:(id /* block */)a5;
- (void)performNetworkConnectionUsingService:(id)a0 orHost:(id)a1 port:(unsigned short)a2 inBackground:(char)a3 completion:(id /* block */)a4;

@end
