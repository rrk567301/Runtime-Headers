@interface ExtensionKitSettings.QuickActionManager : NSObject <_NSQuickActionProviderObserver> {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ snapshot;
    void /* unknown type, empty encoding */ observers;
}

- (void).cxx_destruct;
- (id)init;
- (void)quickActionsDidChange;

@end
