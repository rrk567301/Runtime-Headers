@interface WidgetRenderer.ActivityRendererClient : NSObject <WRActivityRendererServiceXPCClient> {
    void /* unknown type, empty encoding */ _calloutQueue;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _queue_hasReceivedInitializationPayload;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_subscriptions;
    void /* unknown type, empty encoding */ _lock_hasReceivedInitialEnvironment;
    void /* unknown type, empty encoding */ _calloutQueue_extensionsDidChangePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extensionsDidChangePublisher;
    void /* unknown type, empty encoding */ _lock_extensionsByExtensionIdentity;
    void /* unknown type, empty encoding */ _lock_activityDescriptorCollection;
    void /* unknown type, empty encoding */ _calloutQueue_currentRemoteSubscriptionTypeDidChangePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_currentRemoteSubscriptionTypeDidChangePublisher;
    void /* unknown type, empty encoding */ _lock_currentRemoteSubscriptionType;
    void /* unknown type, empty encoding */ _calloutQueue_systemEnvironmentDidChangePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_systemEnvironmentDidChangePublisher;
    void /* unknown type, empty encoding */ _lock_systemEnvironment;
    void /* unknown type, empty encoding */ _calloutQueue_activityReloadedPublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_activityReloadedPublisher;
}

- (id)init;
- (void).cxx_destruct;
- (void)systemEnvironmentDidChange:(id)a0;
- (void)contentDidChange:(id)a0;
- (void)currentRemoteSubscriptionTypeDidChange:(id)a0;
- (void)extensionsDidChange:(id)a0;
- (void)initializeConnection:(id)a0;

@end
