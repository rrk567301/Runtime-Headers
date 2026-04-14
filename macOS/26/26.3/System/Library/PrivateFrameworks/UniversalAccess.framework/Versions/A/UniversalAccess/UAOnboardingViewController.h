@class UAOnboardingFeature;

@interface UAOnboardingViewController : NSViewController

@property (retain, nonatomic) UAOnboardingFeature *feature;

+ (id)_bundle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)constrainToFillBuddyContentView;

@end
