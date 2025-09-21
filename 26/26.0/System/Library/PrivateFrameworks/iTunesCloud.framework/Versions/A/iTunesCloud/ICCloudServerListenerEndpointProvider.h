@class NSString, NSXPCConnection;

@interface ICCloudServerListenerEndpointProvider : NSObject <ICCloudServerListenerEndpointProviding> {
    NSXPCConnection *_listenerEndpointProviderConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_remoteObjectInterface;

- (void)dealloc;
- (id)_listenerEndpointProviderConnection;
- (id)init;
- (id)listenerEndpointForService:(long long)a0 error:(id *)a1;
- (void)notifyDeviceSetupFinishedWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
