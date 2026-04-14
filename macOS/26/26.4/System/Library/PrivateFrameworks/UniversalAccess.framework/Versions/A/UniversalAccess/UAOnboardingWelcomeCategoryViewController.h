@class NSImageView, NSString, NSTextField, UAOnboardingAccessibilitySettingsManager;

@interface UAOnboardingWelcomeCategoryViewController : NSViewController

@property (weak) NSImageView *categoryCompletedIcon;
@property (weak) NSTextField *categoryTitle;
@property (weak) NSImageView *categoryIcon;
@property (copy, nonatomic) NSString *categoryName;
@property (retain, nonatomic) UAOnboardingAccessibilitySettingsManager *settingsManager;

- (void)mouseUp:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)viewWillAppear;
- (void)_setButtonShadow;
- (id)initWithCategoryAndNibName:(id)a0 nibName:(id)a1 bundle:(id)a2;

@end
