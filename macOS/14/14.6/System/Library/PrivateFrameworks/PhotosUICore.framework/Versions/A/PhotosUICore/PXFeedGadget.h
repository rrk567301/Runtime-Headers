@class PXGadgetSpec, PXFeedViewLayoutSpecManager, PXFeedConfiguration, UXNavigationController, PXProgrammaticNavigationDestination, PXFeedViewController, NSString;
@protocol PXGadgetDelegate, PXProgrammaticNavigationParticipant;

@interface PXFeedGadget : NSObject <PXProgrammaticNavigationParticipant, PXGadget> {
    BOOL _didLoadNavigationParticipant;
}

@property (readonly, nonatomic) PXFeedConfiguration *configuration;
@property (readonly, nonatomic) PXFeedViewController *feedViewController;
@property (readonly, nonatomic) PXFeedViewLayoutSpecManager *specManager;
@property (readonly, nonatomic) id<PXProgrammaticNavigationParticipant> navigationParticipant;
@property (readonly, nonatomic) UXNavigationController *navigationController;
@property (nonatomic) BOOL isGadgetControllerActive;
@property (nonatomic) BOOL isContentVisible;
@property (nonatomic) BOOL isContentActive;
@property (readonly, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)contentViewController;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_loadFeedViewControllerIfNeeded;
- (void)_loadSpecManagerIfNeeded;
- (void)_navigateToFullFeedAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_updateIsContentActive;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)gadgetControllerHasAppeared;
- (void)gadgetWasDismissed;
- (void)invalidatePreferredContentHeight;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)userDidSelectAccessoryButton:(id)a0;

@end
