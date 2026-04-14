@class NSString, NSButton, NSTextField;

@interface AKKeepUsingController : NSViewController

@property (retain, nonatomic) NSString *existingAccount;
@property (nonatomic) NSTextField *header;
@property (nonatomic) NSButton *useExistingAccountButton;
@property (copy, nonatomic) id /* block */ useExistingAction;
@property (copy, nonatomic) id /* block */ useOtherAction;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)keepUsingExistingAccountbuttonPressed:(id)a0;
- (void)useOtherAccountButtonPressed:(id)a0;

@end
