@class NSPopoverFrame, NSPopover;

@interface _NSPopoverWindow : NSPanel {
    char _nonActivating;
}

@property NSPopover *_popover;
@property (retain) id popoverAccessibilityParent;
@property (retain) id popoverAccessibilityAnchorElement;
@property unsigned long long anchorEdge;
@property struct CGSize { double x0; double x1; } anchorSize;
@property struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property struct CGPoint { double x0; double x1; } anchorPoint;
@property char animates;
@property (readonly) NSPopoverFrame *_popoverFrame;

+ (unsigned long long)_validateStyleMask:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForFrameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearance:(id)a1 anchorSize:(struct CGSize { double x0; double x1; })a2 contentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 hasTitlebar:(char)a4;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearance:(id)a1 anchorSize:(struct CGSize { double x0; double x1; })a2 contentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a3 hasTitlebar:(char)a4;
+ (Class)frameViewClassForStyleMask:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingAnchorPoint;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_draggableFrame;
- (id)accessibilityActionDescription:(id)a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setContentView:(id)a0;
- (void)_fromConstraintsSetWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_allowsImplicitRemovalFromMovementGroup;
- (char)_canBeSnappingTarget;
- (long long)_childWindowOrderingPriority;
- (char)_excludeFromOrderingGroup;
- (char)_hasActiveDragTypes;
- (char)_ignoreForFullScreenTransition;
- (char)_ignoreForFullScreenTransitionSnapshot;
- (id)_initWithPopover:(id)a0;
- (char)_isNonactivatingPanel;
- (void)_observePopover:(id)a0;
- (long long)_orderFrontAnimationType;
- (long long)_orderOutAnimationType;
- (id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)a0;
- (void)_setNonactivatingPanel:(char)a0;
- (void)_setOrderFrontAnimationType:(long long)a0;
- (void)_setOrderOutAnimationType:(long long)a0;
- (char)_shouldRemoveFromParentIfPossible;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_trackingRegionWindowRectFlipped:(char)a0;
- (void)_unobservePopover:(id)a0;
- (void)_updateContentViewSafeAreaInsets;
- (char)_wantsSheetDimmingMaterial;
- (char)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (id)_windowTransformAnimationForOrdering:(long long)a0 animationType:(long long)a1 interruptingAnimation:(id)a2;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityHelpAttribute;
- (char)accessibilityIsHelpAttributeSettable;
- (char)accessibilityIsTopLevelUIElementAttributeSettable;
- (char)accessibilityIsWindowAttributeSettable;
- (id)accessibilityLabel;
- (id)accessibilityLinkedUIElements;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityTitle;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityWindowAttribute;
- (unsigned long long)anchorEdge;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (struct CGSize { double x0; double x1; })anchorSize;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (char)canEnterFullScreenMode;
- (void)cancelOperation:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (void)mouseDown:(id)a0;
- (void)performClose:(id)a0;
- (id)presentationWindowForError:(id)a0 originatedInWindow:(id)a1;
- (void)setAnchorEdge:(unsigned long long)a0;
- (void)setAnchorSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(char)a1;
- (void)setParentWindow:(id)a0;
- (unsigned long long)shadowOptions;
- (unsigned long long)styleMask;

@end
