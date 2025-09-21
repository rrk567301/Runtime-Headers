@class NSView, IAAccount;

@interface IASetupViewController : NSViewController

@property (retain) IAAccount *account;
@property (retain) NSView *currentView;
@property char showCreateButton;
@property char showBackButton;
@property char inputValidForNext;
@property char authenticating;
@property char appWillQuitOnCancel;

- (void).cxx_destruct;
- (void)cancel;
- (void)next;
- (id)viewForAccount:(id)a0;
- (void)back;
- (void)createWithCompletion:(id /* block */)a0;
- (void)didUpdateCurrentView:(id)a0;
- (void)willDisplayInWindow:(id)a0;

@end
