@class NSTextField, NSString, NSButton, NSObject;
@protocol GKMultiplayerCustomInviteMessageViewControllerDelegate;

@interface GKMultiplayerCustomInviteMessageViewController : NSViewController

@property (retain, nonatomic) NSButton *doneButton;
@property (retain, nonatomic) NSTextField *messageTextField;
@property (weak, nonatomic) NSObject<GKMultiplayerCustomInviteMessageViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSString *message;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)donePressed:(id)a0;

@end
