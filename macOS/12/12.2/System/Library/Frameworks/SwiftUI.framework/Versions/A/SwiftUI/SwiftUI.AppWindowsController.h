@interface SwiftUI.AppWindowsController : NSObject <NSWindowRestoration> {
    void /* unknown type, empty encoding */ appNavigationAuthority;
    void /* unknown type, empty encoding */ makeWindow;
    void /* unknown type, empty encoding */ mainWindowControllers;
    void /* unknown type, empty encoding */ windowCounts;
    void /* unknown type, empty encoding */ auxiliaryWindowControllers;
    void /* unknown type, empty encoding */ settingsWindowController;
    void /* unknown type, empty encoding */ keyWindowObservation;
    void /* unknown type, empty encoding */ mainWindowObservation;
}

+ (void)restoreWindowWithIdentifier:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;

@end
