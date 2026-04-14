@class NSRunningApplication;

@interface DKAppLaunchUtilities : NSObject

@property (retain) NSRunningApplication *eacsApp;
@property id /* block */ appTerminationHandler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)eacsTerminated:(id)a0;
- (void)_listenToAppQuitting;
- (void)launchApp;
- (void)launchAppWithHostWindow:(id)a0 withAppTerminationCompletion:(id /* block */)a1;

@end
