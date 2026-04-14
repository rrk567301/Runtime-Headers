@interface ExtensionKitSettings.SystemExtensionsModel : NSObject <OSSystemExtensionsWorkspaceObserver> {
    void /* unknown type, empty encoding */ add;
    void /* unknown type, empty encoding */ removeAllExtensions;
    void /* unknown type, empty encoding */ markExtensionsForRemoval;
    void /* unknown type, empty encoding */ debouncer;
}

- (id)init;
- (void).cxx_destruct;
- (void)systemExtensionWillBecomeDisabled:(id)a0;
- (void)systemExtensionWillBecomeEnabled:(id)a0;

@end
