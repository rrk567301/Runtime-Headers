@class NSXPCConnection;

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {
    void *mImpl;
    struct ConnectionInfo { NSXPCConnection *mConnection; int mExtUsePermission; BOOL mLinkedSDKRequiresEntitlement; } mConnInfo;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)getComponentList:(id)a0 linkedSDKRequiresEntitlement:(BOOL)a1 includeExtensions:(BOOL)a2 reply:(id /* block */)a3;
- (void)canRegisterComponent:(id)a0 reply:(id /* block */)a1;
- (id)initWithRegistrar:(void *)a0 connection:(id)a1;

@end
