@class NSButton, NSStackView, UAOnboardingImageEnableFeature;

@interface UAOnboardingImageEnableViewController : UAOnboardingViewController

@property (retain, nonatomic) UAOnboardingImageEnableFeature *feature;
@property (weak) NSButton *enableCheckBox;
@property (weak) NSStackView *verticalStackView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithFeature:(id)a0;
- (void)setCheckboxTitle:(id)a0;
- (void)addSettingsObservers;
- (void)_settingsDidChangeOutsideBuddy:(id)a0;
- (void)checkboxPressed:(id)a0;

@end
