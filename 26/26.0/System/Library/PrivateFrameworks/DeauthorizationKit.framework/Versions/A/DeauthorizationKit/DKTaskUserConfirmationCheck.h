@class NSWindow, DKConfirmationWindowController;

@interface DKTaskUserConfirmationCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKConfirmationWindowController *confirmationWindowController;

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (void).cxx_destruct;
- (id)initWithHostWindow:(id)a0;

@end
