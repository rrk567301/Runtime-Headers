@interface ChronoKit.ExtensionManager : NSObject {
    void /* unknown type, empty encoding */ requireValidExtensions;
    void /* unknown type, empty encoding */ _extensionsPublisher;
    void /* unknown type, empty encoding */ _addedPublisher;
    void /* unknown type, empty encoding */ _updatedPublisher;
    void /* unknown type, empty encoding */ _removedPublisher;
    void /* unknown type, empty encoding */ extensionsByIdentifier;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ lookupLock;
    void /* unknown type, empty encoding */ exExtensionIdentityDiscovererSubscription;
    void /* unknown type, empty encoding */ exExtensionIdentityDiscoverer;
    void /* unknown type, empty encoding */ remoteWidgetExtensionSubscription;
    void /* unknown type, empty encoding */ remoteWidgetExtensionProvider;
    void /* unknown type, empty encoding */ extensionFactory;
}

- (id)init;
- (void).cxx_destruct;

@end
