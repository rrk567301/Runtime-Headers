@class NSWindow, DKConfirmationWindowController;

@interface DKTaskUserConfirmationCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKConfirmationWindowController *confirmationWindowController;

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (id)identifier;
- (id)initWithHostWindow:(id)a0;

@end
