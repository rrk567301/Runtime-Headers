@class CPUI_ProgressWindowController, NSString, NSDictionary, NSData, CloudConfigClassicAuthWindowController, NSObject, NSWindow;
@protocol CPUI_ProgressHandler;

@interface CloudConfigClassicEnrollmentManager : NSObject {
    BOOL fSyntheticInputDetected;
}

@property (copy) id /* block */ completionHandler;
@property (retain) NSWindow *hostWindow;
@property (retain) NSObject<CPUI_ProgressHandler> *hostProgress;
@property (retain) CPUI_ProgressWindowController *ourProgress;
@property (retain) NSString *userGUID;
@property (retain) NSDictionary *authInfo;
@property (retain) NSDictionary *cloudConfig;
@property (retain) NSString *credentialsPrompt;
@property (retain) NSData *profileDataToInstall;
@property (retain) CloudConfigClassicAuthWindowController *authController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)showProgress;
- (void)callCompletionHandler:(long long)a0 error:(id)a1;
- (struct TLocalizedRsrcs { id x0; id x1; } *)locRsrcs;
- (void)tryDownload;
- (void)removeProgress;
- (void)promptForAuth;
- (BOOL)syntheticInputDetected;
- (void)startForWindow:(id)a0 progress:(id)a1 completion:(id /* block */)a2;

@end
