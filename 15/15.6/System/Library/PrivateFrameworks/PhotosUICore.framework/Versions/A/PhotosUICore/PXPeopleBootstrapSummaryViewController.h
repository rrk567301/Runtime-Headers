@class UXLabel, PXPeopleBootstrapContext, NSString;
@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapSummaryViewController : UXViewController <PXPeopleFlowViewController>

@property (readonly, weak, nonatomic) UXLabel *promptLabel;
@property (readonly, weak, nonatomic) UXLabel *descriptionLabel;
@property (nonatomic) char useLowMemoryMode;
@property (readonly, nonatomic) PXPeopleBootstrapContext *bootstrapContext;
@property (readonly, nonatomic) char wantsCancelButton;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (weak, nonatomic) id<PXPeopleFlowViewControllerActionDelegate> actionDelegate;
@property (readonly, nonatomic) char shouldConfirmAdvancement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)updateUI;
- (void)viewDidLoad;
- (void)viewWillAppear:(char)a0;
- (id)_localizedTitleString;
- (id)_localizedDescriptionString;
- (id)_localizedPromptString;
- (void)_updateNavigationBarForCurrentTraitCollection;

@end
