@class NSString, NSWindow;

@interface MiroAppDelegate : NSResponder <NSApplicationDelegate>

@property (retain, nonatomic) NSWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;

@end
