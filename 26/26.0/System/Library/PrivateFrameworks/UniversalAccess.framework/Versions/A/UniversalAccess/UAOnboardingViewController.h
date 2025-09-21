@class UAOnboardingFeature;

@interface UAOnboardingViewController : NSViewController

@property (retain, nonatomic) UAOnboardingFeature *feature;

+ (id)_bundle;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)constrainToFillBuddyContentView;

@end
