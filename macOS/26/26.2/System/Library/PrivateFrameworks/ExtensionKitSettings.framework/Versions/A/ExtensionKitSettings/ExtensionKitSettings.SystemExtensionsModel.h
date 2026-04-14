@interface ExtensionKitSettings.SystemExtensionsModel : NSObject <OSSystemExtensionsWorkspaceObserver> {
    void /* unknown type, empty encoding */ add;
    void /* unknown type, empty encoding */ removeAllExtensions;
    void /* unknown type, empty encoding */ markExtensionsForRemoval;
    void /* unknown type, empty encoding */ debouncer;
}

- (void).cxx_destruct;
- (id)init;
- (void)systemExtensionWillBecomeDisabled:(id)a0;
- (void)systemExtensionWillBecomeEnabled:(id)a0;

@end
