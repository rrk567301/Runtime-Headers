@protocol NSServicesRequestor;

@interface SwiftUI.AppDelegate : NSResponder <NSApplicationDelegate, NSApplicationTestingDelegate> {
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ windowsController;
    void /* unknown type, empty encoding */ appNavigationV3Authority;
    void /* unknown type, empty encoding */ sceneListVersion;
    void /* unknown type, empty encoding */ commandsListVersion;
    void /* unknown type, empty encoding */ appDelegate;
    void /* unknown type, empty encoding */ menuBarExtrasController;
    void /* unknown type, empty encoding */ isFinishedLaunching;
}

@property (nonatomic, readonly) id<NSServicesRequestor> servicesRequestor;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (BOOL)applicationExplicitlyMarksAppLaunchComplete:(id)a0;
- (void)applicationWillFinishLaunching:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (BOOL)applicationShouldOpenUntitledFile:(id)a0;
- (BOOL)application:(id)a0 delegateHandlesKey:(id)a1;
- (BOOL)applicationShouldHandleReopen:(id)a0 hasVisibleWindows:(BOOL)a1;
- (void)application:(id)a0 openURLs:(id)a1;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (void)application:(id)a0 didFailToContinueUserActivityWithType:(id)a1 error:(id)a2;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)a0;
- (BOOL)applicationSupportsSecureRestorableState:(id)a0;
- (void)showNewMainWindow:(id)a0;
- (void)showSettingsWindow:(id)a0;

@end
