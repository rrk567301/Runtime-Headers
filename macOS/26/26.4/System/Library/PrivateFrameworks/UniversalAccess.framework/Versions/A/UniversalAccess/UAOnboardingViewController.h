@class UAOnboardingFeature;

@interface UAOnboardingViewController : NSViewController

@property (retain, nonatomic) UAOnboardingFeature *feature;

+ (id)_bundle;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)constrainToFillBuddyContentView;

@end
