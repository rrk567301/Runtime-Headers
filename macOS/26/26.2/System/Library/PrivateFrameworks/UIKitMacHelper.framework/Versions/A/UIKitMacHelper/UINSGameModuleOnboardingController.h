@class NSTextField, NSArray, UINSInputAlternativesEducationViewController, NSButton;

@interface UINSGameModuleOnboardingController : NSViewController {
    UINSInputAlternativesEducationViewController *_educationViewController;
}

@property NSButton *okButton;
@property NSTextField *titleLabel;
@property NSTextField *subtitleLabel;
@property (retain, nonatomic) NSArray *moduleClasses;
@property (nonatomic) BOOL showAllOnboarding;

- (void).cxx_destruct;
- (id)initWithModules:(id)a0;
- (void)viewDidLoad;
- (id)init;

@end
