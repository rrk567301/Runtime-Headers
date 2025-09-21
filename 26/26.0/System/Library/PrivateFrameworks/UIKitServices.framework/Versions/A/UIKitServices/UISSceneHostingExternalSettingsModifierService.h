@class BSServiceQueue, NSString, BSServiceConnectionListener, BSServiceConnectionEndpoint;
@protocol UISSceneHostingExternalSettingsModifierServiceDelegate;

@interface UISSceneHostingExternalSettingsModifierService : NSObject <UISSceneHostingExternalSettingsModifierXPCServerInterface, BSServiceConnectionListenerDelegate, BSInvalidatable> {
    BSServiceQueue *_calloutQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    BSServiceConnectionListener *_lock_listener;
    id<UISSceneHostingExternalSettingsModifierServiceDelegate> _lock_delegate;
    struct { unsigned char delegateSupportsSettingsModifiersForClientProcessIdentityHostedByAuditToken : 1; } _lock_delegateFlags;
}

@property (weak, nonatomic) id<UISSceneHostingExternalSettingsModifierServiceDelegate> delegate;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)dealloc;
- (void)invalidate;
- (id)initWithCalloutQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (oneway void)requestSettingsModifiersForProcessIdentity:(id)a0 withCompletion:(id /* block */)a1;

@end
