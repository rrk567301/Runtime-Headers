@class DKMultipleUsersWarningWindowController, NSWindow;

@interface DKTaskOtherUsersCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKMultipleUsersWarningWindowController *multipleUsersWindowController;

- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)taskDescription;
- (void).cxx_destruct;
- (id)initWithHostWindow:(id)a0;
- (BOOL)otherUsersAreLoggedIn;

@end
