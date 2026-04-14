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
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _iCloudLoginChangeObserver;
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

- (void)menuNeedsUpdate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (struct TFENode { struct OpaqueNodeRef *x0; })targetNode;
- (void)viewDidMoveToWindow;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)viewDidChangeBackingProperties;
- (void)viewDidChangeEffectiveAppearance;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)toggleSidebar:(id)a0;
- (void)setTargetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (BOOL)sidebarIsHidden;
- (void)_commonLocationPopUpInit;
- (void)adjustLocationPopUpConfiguration;
- (void)buildMenuAsync;
- (void)checkDarkBackground;
- (void)didChangeTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)finalizeObservers;
- (void)getAlternateICloudContainer:(id *)a0;
- (void)getRequiredICloudContainer:(struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })iCloudContainerToUse;
- (void)iconAppearancePrefChanged:(BOOL)a0;
- (BOOL)inMovePanel;
- (void)initializeObservers;
- (BOOL)isSavePanel;
- (void)otherLocation:(id)a0;
- (id)recentPlaces;
- (void)retargetFromCloudMenuItem:(id)a0;
- (void)retargetFromMenuItem:(id)a0;
- (void)setAlternateICloudContainer:(id)a0 name:(id)a1;
- (void)setUbiquityContainerURLs:(id)a0 andToken:(const struct { unsigned int x0[8]; } *)a1;
- (void)ubiquityIdentityChanged;
- (BOOL)wantsShowHideSidebarSection;

@end
