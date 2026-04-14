@class DKMultipleUsersWarningWindowController, NSWindow;

@interface DKTaskOtherUsersCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property (retain) DKMultipleUsersWarningWindowController *multipleUsersWindowController;

- (id)identifier;
- (id)taskDescription;
- (void)runWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithHostWindow:(id)a0;
- (BOOL)otherUsersAreLoggedIn;

@end
