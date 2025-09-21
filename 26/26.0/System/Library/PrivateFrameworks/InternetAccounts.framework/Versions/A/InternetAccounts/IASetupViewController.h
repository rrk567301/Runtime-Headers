@class NSView, IAAccount;

@interface IASetupViewController : NSViewController

@property (retain) IAAccount *account;
@property (retain) NSView *currentView;
@property BOOL showCreateButton;
@property BOOL showBackButton;
@property BOOL inputValidForNext;
@property BOOL authenticating;
@property BOOL appWillQuitOnCancel;

- (void)next;
- (void)cancel;
- (void).cxx_destruct;
- (id)viewForAccount:(id)a0;
- (void)back;
- (void)createWithCompletion:(id /* block */)a0;
- (void)didUpdateCurrentView:(id)a0;
- (void)willDisplayInWindow:(id)a0;

@end
