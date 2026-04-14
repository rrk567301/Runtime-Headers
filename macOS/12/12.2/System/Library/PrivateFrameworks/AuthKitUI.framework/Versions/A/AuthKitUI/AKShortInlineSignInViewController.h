@class NSButton;

@interface AKShortInlineSignInViewController : AKInlineSignInViewController

@property (retain) NSButton *notNowButton;
@property (retain) NSButton *createAccountButton;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)notNowButtonPressed:(id)a0;

@end
