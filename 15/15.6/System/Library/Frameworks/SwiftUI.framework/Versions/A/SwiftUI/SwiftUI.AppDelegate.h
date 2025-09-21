@protocol NSServicesRequestor;

@interface SwiftUI.AppDelegate : NSResponder <NSApplicationDelegate, NSApplicationTestingDelegate> {
    void /* unknown type, empty encoding */ graph;
    void /* unknown type, empty encoding */ windowsController;
    void /* unknown type, empty encoding */ sceneListVersion;
    void /* unknown type, empty encoding */ commandsListVersion;
    void /* unknown type, empty encoding */ appDelegate;
    void /* unknown type, empty encoding */ menuBarExtrasController;
    void /* unknown type, empty encoding */ dialogController;
    void /* unknown type, empty encoding */ badgeSeed;
    void /* unknown type, empty encoding */ isFinishedLaunching;
    void /* unknown type, empty encoding */ shouldPresentInitialWindowOnLaunch;
}

@property (nonatomic, readonly) id<NSServicesRequestor> servicesRequestor;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (char)application:(id)a0 delegateHandlesKey:(id)a1;
- (void)applicationWillFinishLaunching:(id)a0;
- (char)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (void)application:(id)a0 didFailToContinueUserActivityWithType:(id)a1 error:(id)a2;
- (void)application:(id)a0 openURLs:(id)a1;
- (char)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (void)applicationDidChangeScreenParameters:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (id)applicationDockMenu:(id)a0;
- (char)applicationExplicitlyMarksAppLaunchComplete:(id)a0;
- (char)applicationOpenUntitledFile:(id)a0;
- (char)applicationShouldHandleReopen:(id)a0 hasVisibleWindows:(char)a1;
- (char)applicationShouldOpenUntitledFile:(id)a0;
- (char)applicationShouldTerminateAfterLastWindowClosed:(id)a0;
- (char)applicationSupportsSecureRestorableState:(id)a0;
- (id)validRequestorForSendType:(id)a0 returnType:(id)a1;
- (void)showNewMainWindow:(id)a0;
- (void)showSettingsWindow:(id)a0;

@end
