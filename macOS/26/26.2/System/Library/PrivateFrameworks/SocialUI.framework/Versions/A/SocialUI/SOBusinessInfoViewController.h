@class NSButton, NSTextField;

@interface SOBusinessInfoViewController : NSViewController

@property (retain, nonatomic) NSTextField *descriptionTextField;
@property (retain, nonatomic) NSButton *aboutButton;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)init;
- (void)clickedAboutButton:(id)a0;
- (void)setDescriptionTextFieldString:(id)a0;

@end
