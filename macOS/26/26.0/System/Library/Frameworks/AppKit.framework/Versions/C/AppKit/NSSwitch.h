@class NSTouch, NSString;
@protocol NSSwitchVisualProvider;

@interface NSSwitch : NSControl <NSAccessibilitySwitch> {
    struct { long long startModelState; struct CGPoint { double x; double y; } startPointInTrackCoordinates; BOOL everDraggedToDifferentState; BOOL mustToggleByDistance; } _currentTrackingState;
    id<NSSwitchVisualProvider> _visualProvider;
}

@property BOOL usesAquaduck;
@property (retain, setter=_setVisualProvider:) id<NSSwitchVisualProvider> _visualProvider;
@property (setter=_setPresentationStateOverride:) long long _presentationStateOverride;
@property (readonly) long long _presentationState;
@property (retain) NSTouch *_trackingTouch;
@property long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingState;
+ (Class)_controlClassSupportingNoCell;
+ (BOOL)_controlClassSupportsNoCell;
+ (Class)_defaultCellClass;
+ (Class)_defaultVisualProviderClass;
+ (BOOL)accessibilityIsSingleCelled;
+ (id)keyPathsForValuesInvalidatingLayout;

- (BOOL)_isRTL;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (double)baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)dealloc;
- (void)layout;
- (void)setEnabled:(BOOL)a0;
- (double)firstBaselineOffsetFromTop;
- (void)setControlSize:(unsigned long long)a0;
- (id)accessibilityValue;
- (void)viewDidChangeBackingProperties;
- (void)sizeToFit;
- (void).cxx_destruct;
- (void)_toggle;
- (id)accessibilityActionDescription:(id)a0;
- (Class)_animatorClass;
- (void)_axDifferentiateWithoutColorDidChange:(id)a0;
- (void)_commonAwake;
- (BOOL)_continueTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct { double x0; unsigned long long x1; long long x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; })_currentDrawingState;
- (BOOL)_hitTestForTouch:(id)a0;
- (BOOL)_hitTestForTrackMouseEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)_initializeTrackingStateForInitialPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_performHapticFeedbackIfEligible;
- (BOOL)_shouldToggleForEndTrackingAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_startTrackingAt:(struct CGPoint { double x0; double x1; })a0;
- (long long)_stateForDragAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_stopTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 endingAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateStateForDragAtPoint:(struct CGPoint { double x0; double x1; })a0 isFinished:(BOOL)a1 isDirectTouch:(BOOL)a2;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySubrole;
- (id)accessibilityValueAttribute;
- (id)designatedFocusRingView;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)performClick:(id)a0;
- (unsigned long long)sendActionOnMask;
- (void)setCell:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (BOOL)wantsUpdateLayer;

@end
