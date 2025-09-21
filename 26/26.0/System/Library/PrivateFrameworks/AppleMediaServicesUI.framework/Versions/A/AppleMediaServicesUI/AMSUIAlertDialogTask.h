@class NSWindow, NSViewController, NSAlert, AMSDialogRequest;

@interface AMSUIAlertDialogTask : AMSTask

@property (weak) NSAlert *alert;
@property (readonly) AMSDialogRequest *request;
@property (readonly) NSViewController *presentingViewController;
@property (readonly) NSWindow *presentingWindow;

+ (id)_convertTextField:(id)a0;

- (id)present;
- (BOOL)cancel;
- (id)_window;
- (void).cxx_destruct;
- (id)_createMacAlertFromRequest:(id)a0;
- (void)_presentMacAlertFromRequest:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;
- (id)initWithRequest:(id)a0 presentingWindow:(id)a1;

@end
