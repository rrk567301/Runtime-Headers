@class NSString;

@interface CNCDRemoteExchangeSyncPersistentStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory>

@property (retain) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)newEndpoint;
- (id)initWithAccountIdentifier:(id)a0;

@end
