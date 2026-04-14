@class DKMultipleUsersWarningWindowController, NSWindow;

@interface DKTaskOtherUsersCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKMultipleUsersWarningWindowController *multipleUsersWindowController;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)otherUsersAreLoggedIn;

@end
