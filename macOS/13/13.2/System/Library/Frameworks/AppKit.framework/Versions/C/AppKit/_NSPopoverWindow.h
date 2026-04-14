@class NSPopoverFrame, NSPopover;

@interface _NSPopoverWindow : NSPanel {
    BOOL _nonActivating;
}

@property NSPopover *_popover;
@property (retain) id popoverAccessibilityParent;
@property unsigned long long anchorEdge;
@property struct CGSize { double x0; double x1; } anchorSize;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property struct CGPoint { double x0; double x1; } anchorPoint;
@property BOOL animates;
@property (readonly) NSPopoverFrame *_popoverFrame;

+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;
+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearance:(id)a1 anchorSize:(struct CGSize { double x0; double x1; })a2 contentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 hasTitlebar:(BOOL)a4;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearance:(id)a1 anchorSize:(struct CGSize { double x0; double x1; })a2 contentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 hasTitlebar:(BOOL)a4;
+ (id)keyPathsForValuesAffectingAnchorPoint;

- (void)dealloc;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (id)accessibilityAttributeNames;
- (void)performClose:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityTitle;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)_canBeSnappingTarget;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (BOOL)_ignoreForFullScreenTransition;
- (id)_windowTransformAnimationForOrdering:(long long)a0 animationType:(long long)a1 interruptingAnimation:(id)a2;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void)setContentView:(id)a0;
- (void)cancelOperation:(id)a0;
- (unsigned long long)styleMask;
- (void)_setNonactivatingPanel:(BOOL)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (unsigned long long)shadowOptions;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (void)setParentWindow:(id)a0;
- (BOOL)_isNonactivatingPanel;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_ignoreForFullScreenTransitionSnapshot;
- (BOOL)_wantsSheetDimmingMaterial;
- (long long)_orderFrontAnimationType;
- (void)_setOrderFrontAnimationType:(long long)a0;
- (long long)_orderOutAnimationType;
- (void)_setOrderOutAnimationType:(long long)a0;
- (BOOL)_shouldRemoveFromParentIfPossible;
- (id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)a0;
- (long long)_childWindowOrderingPriority;
- (BOOL)_excludeFromOrderingGroup;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_draggableFrame;
- (id)presentationWindowForError:(id)a0 originatedInWindow:(id)a1;
- (unsigned long long)anchorEdge;
- (void)setAnchorEdge:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })anchorSize;
- (BOOL)_hasActiveDragTypes;
- (void)setAnchorSize:(struct CGSize { double x0; double x1; })a0;
- (void)_fromConstraintsSetWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_initWithPopover:(id)a0;

@end
