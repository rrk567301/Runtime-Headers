@class NSString, NSTextField;

@interface PKSimpleAlertViewController : NSViewController

@property (retain, nonatomic) NSTextField *messageTextField;
@property (copy, nonatomic) NSString *messageText;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)nibName;
- (id)nibBundle;
- (void)okButtonClicked:(id)a0;

@end
