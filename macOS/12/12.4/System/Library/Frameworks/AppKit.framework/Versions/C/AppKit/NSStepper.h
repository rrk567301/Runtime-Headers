@class NSTrackingArea, NSString, _NSStepperModel;

@interface NSStepper : NSControl <_NSStepperTrackable, NSAccessibilityStepper> {
    double _increment;
    BOOL _valueWraps;
    BOOL _autorepeat;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackingRect; double lastActionTimestamp; BOOL isTrackingUp; BOOL isTrackingWithPressure; } _trackingState;
}

@property (retain, setter=_setPressureTrackingArea:) NSTrackingArea *_pressureTrackingArea;
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
+ (Class)_defaultCellClass;
+ (BOOL)_controlClassSupportsNoCell;
+ (Class)_controlModelClass;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (BOOL)_sendActionFrom:(id)a0;
- (void)performClick:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (id)accessibilityValue;
- (Class)_classToCheckForWantsUpdateLayer;
- (BOOL)acceptsFirstMouse:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (double)firstBaselineOffsetFromTop;
- (double)baselineOffsetFromBottom;
- (void)drawFocusRingMask;
- (void)updateTrackingAreas;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (void)_transferStateToCell:(id)a0;
- (BOOL)_startTrackingAt:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_continueTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_stopTrackingFromPoint:(struct CGPoint { double x0; double x1; })a0 endingAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_continueTrackingWithPeriodicEvent:(id)a0;
- (BOOL)_continueTrackingWithPressureEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (void)_doSingleStep:(BOOL)a0;
- (id)ns_widgetType;

@end
