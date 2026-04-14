@interface FIFinderViewOpenPanelGutsController : FIFinderViewGutsController

- (BOOL)shouldEnableShareButton;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)prepareToHide;
- (void)containerContentChanged:(id)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })_initialTargetNode;
- (BOOL)sidebarInitiallyVisible;
- (void)setIsSavePanel:(BOOL)a0;
- (void)prepareToShow;
- (Class)browserContainerClass;
- (void)configureWindowForContentChange;
- (void)cacheShareButton:(id)a0;
- (void)cacheTagsButton:(id)a0;
- (void)iCloudModeChanged;
- (void)updateICloudButtonImage;
- (void *)userSearchTarget;
- (void)configureCustomAccessibilityDescription:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a0 forSegmentedControl:(id)a1;
- (void)registerForUbiquityStatus;
- (void)unregisterForUbiquityStatus;
- (BOOL)hasUbiquityError;
- (void)updateUbiquityStatus;

@end
