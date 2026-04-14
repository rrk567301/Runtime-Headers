@class NSString, NSTextField;

@interface AOSUIAccountContactsTopContentViewController : NSViewController

@property (weak) NSTextField *titleField;
@property (weak) NSTextField *detailField;
@property (copy) NSString *titleText;
@property (copy) NSString *detailText;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)nibName;
- (id)nibBundle;

@end
