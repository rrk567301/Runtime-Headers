@interface ExtensionKitSettings.QuickActionManager : NSObject <_NSQuickActionProviderObserver> {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ snapshot;
    void /* unknown type, empty encoding */ observers;
}

- (id)init;
- (void).cxx_destruct;
- (void)quickActionsDidChange;

@end
