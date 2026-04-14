@interface SwiftUI.AppKitWindowController : NSWindowController <NSWindowDelegate> {
    void /* unknown type, empty encoding */ rootModifier;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ toolbarBridge;
    void /* unknown type, empty encoding */ barAppearanceBridge;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ windowsController;
    void /* unknown type, empty encoding */ managedWindow;
    void /* unknown type, empty encoding */ sceneStorageValues;
    void /* unknown type, empty encoding */ sceneBridge;
    void /* unknown type, empty encoding */ scenePresentationBridge;
    void /* unknown type, empty encoding */ colorSchemeSeed;
    void /* unknown type, empty encoding */ interactiveResizeSeed;
    void /* unknown type, empty encoding */ scenePhase;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ defaultWindowIdentifier;
    void /* unknown type, empty encoding */ toolbarNeedsUpdate;
    void /* unknown type, empty encoding */ toolbarRunLoopObserverAdded;
    void /* unknown type, empty encoding */ cascadeNumber;
    void /* unknown type, empty encoding */ _isWindowLoaded;
}

@property (nonatomic, readonly) BOOL windowLoaded;
@property (nonatomic) BOOL shouldCascadeWindows;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)rename:(id)a0;
- (BOOL)isWindowLoaded;
- (void)loadWindow;
- (id)makeTouchBar;
- (void)newWindowForTab:(id)a0;
- (void)window:(id)a0 didDecodeRestorableState:(id)a1;
- (void)window:(id)a0 willEncodeRestorableState:(id)a1;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowDidLoad;
- (void)windowDidMiniaturize:(id)a0;
- (void)windowDidOrderOffScreen:(id)a0;
- (void)windowDidOrderOnScreen:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (id)windowTitleForDocumentDisplayName:(id)a0;
- (void)windowWillClose:(id)a0;

@end
