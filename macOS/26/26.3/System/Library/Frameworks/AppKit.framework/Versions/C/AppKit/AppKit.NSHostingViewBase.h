@interface AppKit.NSHostingViewBase : NSObject {
    void /* unknown type, empty encoding */ nsView;
    void /* unknown type, empty encoding */ safeAreaRegions;
    void /* unknown type, empty encoding */ viewGraph;
    void /* unknown type, empty encoding */ initialInheritedEnvironment;
    void /* unknown type, empty encoding */ inheritedEnvironment;
    void /* unknown type, empty encoding */ environmentOverride;
    void /* unknown type, empty encoding */ canAdvanceTimeAutomatically;
    void /* unknown type, empty encoding */ lastRenderTime;
    void /* unknown type, empty encoding */ pendingPreferencesUpdate;
    void /* unknown type, empty encoding */ isUpdating;
    void /* unknown type, empty encoding */ needsDeferredUpdate;
    void /* unknown type, empty encoding */ isHiddenForReuse;
}

- (id)init;
- (void).cxx_destruct;
- (void)externalEnvironmentDidChange;
- (void)viewDidChangeScreen;

@end
