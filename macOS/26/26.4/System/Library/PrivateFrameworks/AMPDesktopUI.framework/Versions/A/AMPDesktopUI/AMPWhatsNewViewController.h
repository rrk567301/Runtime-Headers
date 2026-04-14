@class NSMutableArray;

@interface AMPWhatsNewViewController : AMPWelcomeViewTemplateController

@property (retain, nonatomic) NSMutableArray *bulletLines;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)addListItemWithTitle:(id)a0 description:(id)a1 image:(id)a2 tintColor:(id)a3 accessibilityDescription:(id)a4;
- (void)assignBulletViews;
- (id)buildBulletWithTitle:(id)a0 description:(id)a1 image:(id)a2 tintColor:(id)a3 accDesc:(id)a4;
- (id)initWithPrivacyIdentifier:(id)a0 header:(id)a1 button:(id)a2 automationID:(id)a3;

@end
