@class NSTextField, NSView, NSArray, NSString, GKChallenge, GKDimmingView, NSLayoutConstraint, GKDimmingWindow;
@protocol GKComposeControllerDelegate;

@interface GKComposeController : NSViewController

@property NSTextField *titleLabel;
@property NSTextField *recipientField;
@property NSTextField *challengeField;
@property NSTextField *messageField;
@property NSView *challengeView;
@property NSLayoutConstraint *messageFieldYConstraint;
@property (retain) GKDimmingView *dimmingView;
@property (retain) GKDimmingWindow *dimmingWindow;
@property (retain) NSArray *players;
@property (retain) NSString *defaultMessage;
@property (retain) GKChallenge *challenge;
@property BOOL isSettings;
@property (weak) id<GKComposeControllerDelegate> delegate;

- (void)controlTextDidChange:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void)done:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)addRecipients:(id)a0;
- (void)showInView:(id)a0;
- (void)showInWindow:(id)a0;
- (void)addRecipientPlayers:(id)a0;
- (void)dimView:(id)a0;
- (void)dimWindow:(id)a0;
- (void)setupChallengeView;
- (void)showComposeInWindow:(id)a0;
- (void)validateReadyToSend;

@end
