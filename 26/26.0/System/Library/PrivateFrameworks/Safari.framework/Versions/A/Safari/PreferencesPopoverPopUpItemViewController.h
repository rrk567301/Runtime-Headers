@class PerSitePreferencePopUpButton, NSLayoutConstraint, NSTextField;

@interface PreferencesPopoverPopUpItemViewController : NSViewController

@property (weak, nonatomic) NSTextField *preferenceTitleTextField;
@property (weak, nonatomic) PerSitePreferencePopUpButton *permissionsPopUpButton;
@property (weak, nonatomic) NSLayoutConstraint *permissionsPopUpButtonTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *permissionsPopUpButtonBottomConstraint;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
