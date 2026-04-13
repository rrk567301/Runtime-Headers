@class NSSplitViewItem, NSVisualEffectView, NSLayoutConstraint;

@interface _NSSplitViewItemViewWrapper : NSView <NSSplitViewItemSeparatorTrackingAdapter> {
    NSSplitViewItem *_splitViewItem;
    NSVisualEffectView *_effectView;
    double _minimumThickness;
    double _maximumThickness;
    unsigned char _isOverlaid : 1;
    unsigned char _sidebar : 1;
    unsigned char _hasBaseVibrancyEffect : 1;
    unsigned char _forceWithinWindowBlending : 1;
    unsigned char _isRegisteredWithTitlebar : 1;
    unsigned int _reserved : 27;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } splitFrame;
@property (readonly) long long titlebarSeparatorStyle;
@property (readonly) BOOL isSidebar;
@property (readonly) BOOL isTrailingSidebar;
@property (retain) NSLayoutConstraint *firstEdgeConstraint;
@property (retain) NSLayoutConstraint *lastEdgeConstraint;
@property (retain) NSSplitViewItem *splitViewItem;
@property NSLayoutConstraint *breadthConstraint;
@property NSLayoutConstraint *equalBreadthConstraint;
@property (getter=isOverlaid) BOOL overlaid;
@property double minimumThickness;
@property double maximumThickness;
@property (getter=isSidebar) BOOL sidebar;
@property BOOL hasBaseVibrancyEffect;
@property BOOL forceWithinWindowBlending;
@property BOOL isRegisteredWithTitlebar;

+ (id)keyPathsForValuesAffectingSplitFrame;
+ (id)keyPathsForValuesAffectingTitlebarSeparatorStyle;

- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)_preferredAppearance;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)otherMouseDown:(id)a0;
- (void)wrapView;
- (double)engageBreadthConstraintForAnimatingLastEdge:(BOOL)a0;
- (void)disengageBreadthConstraint;
- (void)updateBreadthConstraintPriority;
- (id)_splitView;
- (void)_updateEffectViewState;
- (void)_createOrUpdateMinimumSizeConstraint;
- (void)_createOrUpdateMaximumSizeConstraint;
- (id)_overlayMaterialGroupName;
- (BOOL)_shouldConsumeMouseEvents;

@end
