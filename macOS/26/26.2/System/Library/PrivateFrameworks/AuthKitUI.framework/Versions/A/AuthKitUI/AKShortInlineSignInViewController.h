@class NSButton, NSTextField;

@interface AKShortInlineSignInViewController : AKInlineSignInViewController

@property (retain, nonatomic) NSButton *notNowButton;
@property (retain, nonatomic) NSButton *createAccountButton;
@property (retain, nonatomic) NSTextField *subtextLabel;

- (void).cxx_destruct;
- (id)init;
- (void)awakeFromNib;
- (void)notNowButtonPressed:(id)a0;

@end
