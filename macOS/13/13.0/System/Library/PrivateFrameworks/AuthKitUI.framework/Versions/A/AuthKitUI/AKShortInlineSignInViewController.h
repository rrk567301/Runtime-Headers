@class NSButton;

@interface AKShortInlineSignInViewController : AKInlineSignInViewController

@property (retain, nonatomic) NSButton *notNowButton;
@property (retain, nonatomic) NSButton *createAccountButton;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)notNowButtonPressed:(id)a0;

@end
