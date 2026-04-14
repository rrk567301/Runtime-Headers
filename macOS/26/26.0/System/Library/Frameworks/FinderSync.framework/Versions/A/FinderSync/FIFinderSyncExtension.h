@class NSString;
@protocol FIFinderSyncExtensionHostProtocol;

@interface FIFinderSyncExtension : FIFinderSyncController <FIFinderSyncExtensionProtocol>

@property (retain, nonatomic) id<FIFinderSyncExtensionHostProtocol> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)singleton;
+ (id)_extensionAuxiliaryHostProtocol;

- (void)begin;
- (void)cleanUp;
- (void)dealloc;
- (id)delegate;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0;
- (void)executeCommand:(id)a0 target:(id)a1 items:(id)a2;
- (void)executeCommandWithMenuItemDictionary:(id)a0 target:(id)a1 items:(id)a2;
- (void)requestBadgeIdentifierForURL:(id)a0;
- (void)requestMenuItemsForTarget:(id)a0 selectedItems:(id)a1 menu:(unsigned long long)a2 result:(id /* block */)a3;
- (void)startWatchingDirectoryURL:(id)a0;
- (void)stopWatchingDirectoryURL:(id)a0;
- (void)supportedServiceNamesForItemWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)valuesForAttributes:(id)a0 forItemWithURL:(id)a1 completion:(id /* block */)a2;
- (id)fetchEndpointCreatingProxyForURL:(id)a0;
- (void)setUpSingletonAndHostPrincipal;

@end
