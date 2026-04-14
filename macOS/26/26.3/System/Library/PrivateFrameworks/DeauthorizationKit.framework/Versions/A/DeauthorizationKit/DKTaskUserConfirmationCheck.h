@class NSWindow, DKConfirmationWindowController;

@interface DKTaskUserConfirmationCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKConfirmationWindowController *confirmationWindowController;

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)taskDescription;
- (id)initWithHostWindow:(id)a0;

@end
