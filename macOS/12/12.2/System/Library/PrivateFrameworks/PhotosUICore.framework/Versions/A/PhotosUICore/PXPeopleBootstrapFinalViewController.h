@class UXLabel, PXPeopleBootstrapContext, NSString;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapFinalViewController : UXViewController <PXPeopleFlowViewController>

@property (readonly, weak, nonatomic) UXLabel *promptLabel;
@property (readonly, weak, nonatomic) UXLabel *descriptionLabel;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, nonatomic) BOOL wantsCancelButton;
@property (readonly, nonatomic) BOOL controlsAdvancementInternally;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)updateUI;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)_localizedPromptString;
- (id)_localizedDescriptionString;
- (id)_localizedTitleString;

@end
