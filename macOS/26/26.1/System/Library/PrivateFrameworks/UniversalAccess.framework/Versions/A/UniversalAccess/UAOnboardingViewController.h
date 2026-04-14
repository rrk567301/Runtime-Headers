@class UAOnboardingFeature;

@interface UAOnboardingViewController : NSViewController

@property (retain, nonatomic) UAOnboardingFeature *feature;

+ (id)_bundle;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)constrainToFillBuddyContentView;

@end
