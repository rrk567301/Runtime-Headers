@interface FIFinderViewOpenPanelGutsController : FIFinderViewGutsController

- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)shouldEnableShareButton;
- (void)prepareToHide;
- (void)containerContentChanged:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })_initialTargetNode;
- (void)prepareToShow;
- (Class)browserContainerClass;
- (void)configureWindowForContentChange;
- (BOOL)sidebarInitiallyVisible;
- (void)setIsSavePanel:(BOOL)a0;
- (void)cacheShareButton:(id)a0;
- (void)cacheTagsButton:(id)a0;
- (void)iCloudModeChanged;
- (void)registerForUbiquityStatus;
- (void)unregisterForUbiquityStatus;
- (void)updateICloudButtonImage;
- (void *)userSearchTarget;
- (void)configureCustomAccessibilityDescription:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0 forSegmentedControl:(id)a1;
- (BOOL)hasUbiquityError;
- (void)updateUbiquityStatus;

@end
