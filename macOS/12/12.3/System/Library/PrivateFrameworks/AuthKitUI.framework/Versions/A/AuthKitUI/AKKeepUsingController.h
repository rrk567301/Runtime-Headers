@class NSString, NSButton, NSTextField;

@interface AKKeepUsingController : NSViewController

@property (retain) NSString *existingAccount;
@property NSTextField *header;
@property NSButton *useExistingAccountButton;
@property (copy) id /* block */ useExistingAction;
@property (copy) id /* block */ useOtherAction;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)keepUsingExistingAccountbuttonPressed:(id)a0;
- (void)useOtherAccountButtonPressed:(id)a0;

@end
