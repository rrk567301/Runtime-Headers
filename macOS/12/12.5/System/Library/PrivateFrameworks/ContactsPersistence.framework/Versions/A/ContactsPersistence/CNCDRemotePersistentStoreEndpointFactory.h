@class NSURL, NSString;

@interface CNCDRemotePersistentStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory>

@property (retain) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)newEndpoint;

@end
