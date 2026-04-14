@class NSMutableDictionary, NSMapTable, PKDaemonClient, NSDictionary, NSObject;
@protocol OS_dispatch_queue, PKExternalProviders;

@interface PKHost : NSObject

@property (retain) NSMutableDictionary *activePlugIns;
@property (retain) NSMutableDictionary *activeOneShots;
@property (retain) NSMapTable *discoveryMap;
@property (retain) NSObject<OS_dispatch_queue> *hostQueue;
@property (retain) PKDaemonClient *daemon;
@property (readonly) NSDictionary *hostInfoPlist;
@property (readonly) id<PKExternalProviders> external;

+ (id)defaultHost;

- (void)deactivatePlugIn:(id)a0;
- (id)activatePlugIn:(id)a0;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)a0 flags:(unsigned long long)a1 found:(id /* block */)a2;
- (void)readyPlugIns:(id)a0 synchronously:(BOOL)a1 environment:(id)a2 languages:(id)a3 persona:(id)a4 sandbox:(id)a5 ready:(id /* block */)a6;
- (void)setElection:(long long)a0 forPlugIn:(id)a1;
- (void)findPlugInByUUID:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)accessPlugIns:(id)a0 synchronously:(BOOL)a1 flags:(unsigned long long)a2 extensions:(id /* block */)a3;
- (id)findPlugInByUUID:(id)a0 withError:(id *)a1;
- (id)initWithDaemon:(id)a0 externalProviders:(id)a1;
- (void)discoverPlugInsForAttributes:(id)a0 flags:(unsigned long long)a1 found:(id /* block */)a2;
- (void)setExtensionState:(id)a0 forPlugIn:(id)a1;
- (void)findPlugInByPathURL:(id)a0 reply:(id /* block */)a1;
- (id)rewriteDiscoveryAttributes:(id)a0 flags:(unsigned long long)a1;
- (id)activePlugInForIdentifier:(id)a0;
- (void)cancelPlugInDiscovery:(id)a0;
- (void)_findPlugInByUUID:(id)a0 synchronously:(BOOL)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;

@end
