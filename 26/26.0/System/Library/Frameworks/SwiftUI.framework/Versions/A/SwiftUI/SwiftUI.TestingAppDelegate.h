@interface SwiftUI.TestingAppDelegate : NSResponder <NSApplicationTestingDelegate> {
    void /* unknown type, empty encoding */ mainWindow;
    void /* unknown type, empty encoding */ comparisonWindow;
    void /* unknown type, empty encoding */ windowsController;
    void /* unknown type, empty encoding */ testHost;
    void /* unknown type, empty encoding */ comparisonHost;
    void /* unknown type, empty encoding */ didLaunch;
    void /* unknown type, empty encoding */ isFinishedLaunching;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)applicationDidFinishLaunching:(id)a0;
- (void).cxx_destruct;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (BOOL)applicationExplicitlyMarksAppLaunchComplete:(id)a0;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)a0;

@end
