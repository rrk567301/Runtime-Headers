@class BSServiceConnection, NSString, NSObject, BSServiceConnectionEndpoint;
@protocol OS_dispatch_queue;

@interface UISSceneHostingExternalSettingsModifierClient : NSObject <BSInvalidatable> {
    BSServiceConnectionEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

@property (class, readonly, nonatomic) BSServiceConnectionEndpoint *defaultShellEndpoint;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)_remoteTarget;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)initWithServerEndpoint:(id)a0;
- (void)requestSettingsModifiersForProcessIdentity:(id)a0 withCompletion:(id /* block */)a1;
- (void)test_invalidateConnection;

@end
