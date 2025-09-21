@interface QTHUDSliderCell : NSActionCell {
    double _minValue;
    double _maxValue;
    double _currentValue;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_cellFrameForTrackingMousePtr;
}

+ (void)initialize;
+ (char)prefersTrackingUntilMouseUp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)doubleValue;
- (float)floatValue;
- (int)intValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)integerValue;
- (id)stringValue;
- (void)setStringValue:(id)a0;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (double)maxValue;
- (double)minValue;
- (void)setMaxValue:(double)a0;
- (void)setMinValue:(double)a0;
- (id)accessibilityActionDescription:(id)a0;
- (void)pageUp:(id)a0;
- (void)setDoubleValue:(double)a0;
- (void)moveUp:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (char)isContinuous;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)pageDown:(id)a0;
- (void)setContinuous:(char)a0;
- (void)setFloatValue:(float)a0;
- (void)setIntValue:(int)a0;
- (void)setIntegerValue:(long long)a0;
- (char)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(char)a3;
- (char)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(char)a3;
- (void)QTHUD_markAreasNeedingDisplayForAction:(void *)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (char)isTrackingMouse;
- (id)_QTUISize;
- (id)_QTHUDSliderHighlightedRanges;
- (double)_QTHUDSliderValidateUserValue:(double)a0;
- (id)_QTUIState;
- (void)_markControlViewDirtyIfNecessesaryForNewFraction:(double)a0 oldFraction:(double)a1;
- (void)_setDoubleValue:(double)a0 minValue:(double)a1 maxValue:(double)a2;
- (char)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 ofView:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knobRectAtValue:(double)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mouseTrackingRectWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGPoint { double x0; double x1; })pointAtValue:(double)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (char)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 ofView:(id)a3 mouseIsUp:(char)a4;
- (double)valueAtPoint:(struct CGPoint { double x0; double x1; })a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;

@end
