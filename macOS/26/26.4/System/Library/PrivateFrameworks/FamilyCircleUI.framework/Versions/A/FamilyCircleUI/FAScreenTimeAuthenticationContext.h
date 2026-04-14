@class NSString, FAPINContainerViewController, NSWindow;

@interface FAScreenTimeAuthenticationContext : NSObject <FAPINContainerViewControllerDelegate>

@property (copy) id /* block */ completionHandler;
@property BOOL authenticationCompleted;
@property (retain) FAPINContainerViewController *containerViewController;
@property (weak) NSWindow *parentWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleAuthenticationCompletion:(id)a0;
- (void)cleanupAndCompleteWithResult:(BOOL)a0;
- (void)handlePINViewControllerError:(id)a0;
- (void)handlePINViewControllerResponse:(id)a0 error:(id)a1;
- (void)handleSheetDismissal:(long long)a0;
- (void)pinContainerViewControllerDidCancel:(id)a0;
- (void)presentPINViewController:(id)a0;

@end
