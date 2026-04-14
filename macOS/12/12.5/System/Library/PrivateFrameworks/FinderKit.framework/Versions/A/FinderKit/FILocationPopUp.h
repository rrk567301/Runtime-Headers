@class NSArray, FILocationMenuFactory, NSURL, NSObject, FI_TNotificationCenterObserverGlue;
@protocol FILocationPopUpDelegate;

@interface FILocationPopUp : NSPopUpButton {
    id<FILocationPopUpDelegate> _delegate;
    id<FILocationPopUpDelegate> _weakDelegate;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _targetNode;
    NSArray *_ubiquityContainerURLs;
    struct { unsigned int val[8]; } _audit_token;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _alternateICloudContainer;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _alternateICloudContainerName;
    BOOL _nodeObserversInitialized;
    BOOL _darkBackground;
    double _scaleFactor;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _iCloudLoginChangeObserver;
    FILocationMenuFactory *_menuFactory;
}

@property (weak) id<FILocationPopUpDelegate> delegate;
@property (retain) NSURL *directoryURL;
@property (nonatomic) BOOL shouldIncludeAncestors;
@property (nonatomic) BOOL shouldShowDevices;
@property (nonatomic) BOOL shouldShowFavorites;
@property (nonatomic) BOOL shouldShowCloud;
@property (nonatomic) BOOL shouldAllowTargetingCloud;
@property (nonatomic) BOOL shouldShowKeyEquivalents;
@property (copy, nonatomic) NSArray *ubiquityContainerURLs;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (void)awakeFromNib;
- (void)viewDidChangeBackingProperties;
- (void)toggleSidebar:(id)a0;
- (void)setUbiquityContainerURLs:(id)a0 andToken:(const struct { unsigned int x0[8]; } *)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })targetNode;
- (void)setTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)setAlternateICloudContainer:(id)a0 name:(id)a1;
- (BOOL)isSavePanel;
- (void)ubiquityIdentityChanged;
- (void)retargetFromMenuItem:(id)a0;
- (void)retargetFromCloudMenuItem:(id)a0;
- (void)initializeObservers;
- (void)checkDarkBackground;
- (void)buildMenuAsync;
- (void)_commonLocationPopUpInit;
- (void)finalizeObservers;
- (BOOL)inMovePanel;
- (void)didChangeTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })iCloudContainerToUse;
- (BOOL)wantsShowHideSidebarSection;
- (void)adjustLocationPopUpConfiguration;
- (id)recentPlaces;
- (BOOL)sidebarIsHidden;
- (void)otherLocation:(id)a0;
- (id)ubiquityContainerURLs;
- (void)setUbiquityContainerURLs:(id)a0;
- (void)getAlternateICloudContainer:(id *)a0;
- (void)getRequiredICloudContainer:(struct TFENode { struct OpaqueNodeRef *x0; } *)a0;

@end
