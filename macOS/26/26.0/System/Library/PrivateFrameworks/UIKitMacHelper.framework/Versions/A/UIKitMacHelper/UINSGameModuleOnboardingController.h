@class NSTextField, NSArray, UINSInputAlternativesEducationViewController, NSButton;

@interface UINSGameModuleOnboardingController : NSViewController {
    UINSInputAlternativesEducationViewController *_educationViewController;
}

@property NSButton *okButton;
@property NSTextField *titleLabel;
@property NSTextField *subtitleLabel;
@property (retain, nonatomic) NSArray *moduleClasses;
@property (nonatomic) BOOL showAllOnboarding;

- (void)viewDidLoad;
- (id)initWithModules:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
