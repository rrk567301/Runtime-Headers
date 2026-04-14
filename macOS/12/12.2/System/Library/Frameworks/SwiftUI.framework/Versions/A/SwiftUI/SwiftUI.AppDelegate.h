@protocol NSServicesRequestor;

@interface SwiftUI.AppDelegate : NSResponder <NSApplicationDelegate> {
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ windowsController;
    void /* unknown type, empty encoding */ appNavigationAuthority;
    void /* unknown type, empty encoding */ sceneListVersion;
    void /* unknown type, empty encoding */ commandsListVersion;
    void /* unknown type, empty encoding */ appDelegate;
    void /* unknown type, empty encoding */ isFinishedLaunching;
}

@property (nonatomic, readonly) id<NSServicesRequestor> servicesRequestor;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)applicationWillFinishLaunching:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (BOOL)applicationShouldOpenUntitledFile:(id)a0;
- (BOOL)applicationShouldHandleReopen:(id)a0 hasVisibleWindows:(BOOL)a1;
- (void)application:(id)a0 openURLs:(id)a1;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (void)application:(id)a0 didFailToContinueUserActivityWithType:(id)a1 error:(id)a2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)a0;
- (BOOL)applicationSupportsSecureRestorableState:(id)a0;
- (void)showNewMainWindow:(id)a0;
- (void)showPreferencesWindow:(id)a0;

@end
