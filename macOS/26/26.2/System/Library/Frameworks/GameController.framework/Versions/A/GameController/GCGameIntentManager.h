@class NSString;

@interface GCGameIntentManager : NSObject <GCGameIntentLauncherXPCServerInterface, GCGameIntentLauncherService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)_ui_launchApplicationWithBundleIdentifier:(id)a0;
- (void)launchApplicationWithBundleIdentifier:(id)a0;
- (void)togglePlatformGamesLibrary;
- (void)ui_togglePlatformGamesLibrary;

@end
