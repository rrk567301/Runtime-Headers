@class NSTrackingArea, NSString, _NSStepperModel;

@interface NSStepper : NSControl <_NSStepperTrackable, NSAccessibilityStepper> {
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackingRect; double lastActionTimestamp; BOOL isTrackingUp; BOOL isHovered; BOOL isTrackingWithPressure; } _trackingState;
    unsigned char _cellIsStepperCell : 1;
    unsigned char _hasDrawRectOverride : 1;
}

@property BOOL usesAquaduck;
@property (retain, setter=_setPressureTrackingArea:) NSTrackingArea *_stepperTrackingArea;
@property (readonly) _NSStepperModel *_controlModel;
@property double minValue;
@property double maxValue;
@property double increment;
@property BOOL valueWraps;
@property BOOL autorepeat;
@property (getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (Class)_controlClassSupportingNoCell;
+ (BOOL)_controlClassSupportsNoCell;
+ (Class)_controlModelClass;
+ (Class)_controlStorageClass;
+ (Class)_defaultCellClass;
+ (Class)_defaultVisualProviderClass;

- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setObjectValue:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (id)accessibilityLabel;
- (double)baselineOffsetFromBottom;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setDoubleValue:(double)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)setIntegerValue:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setStringValue:(id)a0;
- (void)setAttributedStringValue:(id)a0;
- (void)layout;
- (void)encodeWithCoder:(id)a0;
- (double)firstBaselineOffsetFromTop;
- (id)accessibilityValue;
- (void)updateTrackingAreas;
- (void)setFloatValue:(float)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)sizeToFit;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)didChangeValueForKey:(id)a0;
- (void)moveUp:(id)a0;
- (id)_visualProvider;
- (Class)_classToCheckForWantsUpdateLayer;
- (BOOL)_continueTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_continueTrackingWithPeriodicEvent:(id)a0;
- (BOOL)_continueTrackingWithPressureEvent:(id)a0;
- (void)_doSingleStep:(BOOL)a0;
- (void)_finishedMakingConnections;
- (BOOL)_hasAnyDrawingOverride;
- (void)_mouseDown:(id)a0;
- (BOOL)_sendActionFrom:(id)a0;
- (void)_setVisualProvider:(id)a0;
- (BOOL)_startTrackingAt:(struct CGPoint { double x0; double x1; })a0;
- (void)_stopTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 endingAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_transferStateToCell:(id)a0;
- (void)_updateVisualProviderState;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)designatedFocusRingView;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (void)gestureRecognizerTrackingAction:(id)a0;
- (long long)hitTestForPoint:(struct CGPoint { double x0; double x1; })a0 inTrackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inReferenceView:(id)a2;
- (void)moveDown:(id)a0;
- (id)ns_widgetType;
- (void)performClick:(id)a0;
- (void)setCell:(id)a0;
- (void)setIntValue:(int)a0;
- (BOOL)wantsUpdateLayer;

@end
