@class NSString, NSView, NSSplitViewItem, NSLayoutConstraint, _NSSplitViewItemAccessoryViewWrapper, NSVisualEffectView;
@protocol NSSplitViewItemAccessoryView;

@interface _NSSplitViewItemViewWrapper : NSView <NSSplitViewItemSeparatorTrackingAdapter> {
    NSSplitViewItem *_splitViewItem;
    _NSSplitViewItemAccessoryViewWrapper *_accessoryWrapper;
    NSString *_accessoryGroupName;
    long long _accessoryMaterial;
    NSVisualEffectView *_effectView;
    double _minimumThickness;
    double _maximumThickness;
    NSLayoutConstraint *_stayPutConstraint;
    unsigned char _isOverlaid : 1;
    unsigned char _sidebar : 1;
    unsigned char _hasBaseVibrancyEffect : 1;
    unsigned char _forceWithinWindowBlending : 1;
    unsigned char _isRegisteredWithTitlebar : 1;
    unsigned char _isPeekEngaged : 1;
    unsigned char _adjacentPeekEngaged : 1;
    unsigned char _alignmentSatisfied : 1;
}

@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } splitFrame;
@property (readonly) long long titlebarSeparatorStyle;
@property (readonly) char isSidebar;
@property (readonly) char isTrailingSidebar;
@property (readonly) NSView<NSSplitViewItemAccessoryView> *accessoryView;
@property (retain) NSLayoutConstraint *firstEdgeConstraint;
@property (retain) NSLayoutConstraint *lastEdgeConstraint;
@property (retain) NSSplitViewItem *splitViewItem;
@property NSLayoutConstraint *breadthConstraint;
@property NSLayoutConstraint *equalBreadthConstraint;
@property (getter=isOverlaid) char overlaid;
@property double minimumThickness;
@property double maximumThickness;
@property (getter=isSidebar) char sidebar;
@property char hasBaseVibrancyEffect;
@property char forceWithinWindowBlending;
@property char isRegisteredWithTitlebar;

+ (char)clipsToBounds;
+ (id)keyPathsForValuesAffectingAccessoryView;
+ (id)keyPathsForValuesAffectingSplitFrame;
+ (id)keyPathsForValuesAffectingTitlebarSeparatorStyle;

- (void)dealloc;
- (void)setHidden:(char)a0;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)updateBreadthConstraintPriority;
- (double)_accessoryViewHeight;
- (void)_createOrUpdateMaximumSizeConstraint;
- (void)_createOrUpdateMinimumSizeConstraint;
- (id)_overlayMaterialGroupName;
- (id)_preferredAppearance;
- (char)_shouldConsumeMouseEvents;
- (id)_splitView;
- (void)_updateEffectViewState;
- (id)accessoryGroupName;
- (long long)accessoryMaterial;
- (char)alignmentSatisfied;
- (void)disengageAdjacentPeek;
- (void)disengageBreadthConstraint;
- (void)disengagePeek;
- (void)engageAdjacentPeekOnLeadingEdge:(char)a0;
- (double)engageBreadthConstraintForAnimatingLastEdge:(char)a0;
- (void)engagePeek;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setAccessoryGroupName:(id)a0;
- (void)setAccessoryMaterial:(long long)a0;
- (void)setAlignmentSatisfied:(char)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)wrapView;

@end
