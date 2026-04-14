@class NSString;

@interface NSStepperCell : NSActionCell <_NSStepperTrackable> {
    double _value;
    double _minValue;
    double _maxValue;
    double _increment;
    struct { unsigned char valueWraps : 1; unsigned char autorepeat : 1; unsigned char drawing : 1; unsigned char isTrackingWithPressure : 1; unsigned int reserved : 28; } _stFlags;
}

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

+ (BOOL)prefersTrackingUntilMouseUp;

- (id)init;
- (float)floatValue;
- (double)doubleValue;
- (int)intValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)stringValue;
- (long long)integerValue;
- (void)setStringValue:(id)a0;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityChildrenAttribute;
- (void)setControlView:(id)a0;
- (id)accessibilityLinkedUIElements;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (void)setDoubleValue:(double)a0;
- (void)setIntValue:(int)a0;
- (void)setIntegerValue:(long long)a0;
- (void)setFloatValue:(float)a0;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityMinValueAttribute;
- (BOOL)accessibilityIsMinValueAttributeSettable;
- (id)accessibilityMaxValueAttribute;
- (BOOL)accessibilityIsMaxValueAttributeSettable;
- (id)accessibilityHelpStringForChild:(id)a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilitySizeOfChild:(id)a0;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)getPeriodicDelay:(float *)a0 interval:(float *)a1;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (BOOL)_sendActionFrom:(id)a0;
- (int)_vibrancyBlendModeForControlView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBoundsForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)continueTrackingGesture:(id)a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (void)updateTrackingAreaWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_pressureConfigurationIfNeeded;
- (void)continueTrackingPeriodicEvent:(id)a0 inView:(id)a1;
- (id)_coreUIDrawOptionsWithView:(id)a0;
- (void)_doSingleStep:(BOOL)a0 inView:(id)a1;
- (id)accessibilityIncrementButtonAttribute;
- (BOOL)accessibilityIsIncrementButtonAttributeSettable;
- (id)accessibilityDecrementButtonAttribute;
- (BOOL)accessibilityIsDecrementButtonAttributeSettable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityArrowScreenRect:(BOOL)a0;
- (BOOL)_shouldHighlightCellWhenSelected;

@end
