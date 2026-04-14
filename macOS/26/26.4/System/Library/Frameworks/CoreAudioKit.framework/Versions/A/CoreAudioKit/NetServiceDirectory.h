@class NSString, NSMutableArray;

@interface NetServiceDirectory : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    id mClient;
    NSMutableArray *mNetServiceBrowsers;
    NSMutableArray *mNetServices;
    NSMutableArray *mResolvingServices;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (id)services;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)netServiceDidResolveAddress:(id)a0;
- (long long)indexOfService:(id)a0;
- (id)serviceAtIndex:(unsigned long long)a0;
- (id)initWithClient:(id)a0 forService:(id)a1 inDomain:(id)a2;
- (id)initWithClient:(id)a0 forServices:(id)a1 inDomain:(id)a2;
- (unsigned long long)serviceCount;

@end
