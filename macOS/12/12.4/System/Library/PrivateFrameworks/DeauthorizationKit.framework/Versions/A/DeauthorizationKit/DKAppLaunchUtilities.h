@class NSRunningApplication;

@interface DKAppLaunchUtilities : NSObject

@property (retain) NSRunningApplication *eacsApp;
@property id /* block */ appTerminationHandler;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)launchApp;
- (void)_listenToAppQuitting;
- (void)eacsTerminated:(id)a0;
- (void)launchAppWithHostWindow:(id)a0 withAppTerminationCompletion:(id /* block */)a1;

@end
