@interface QTHUDSlider : NSControl {
    struct QTHUDSliderInternal { } *_QTHUDSliderInternal;
}

+ (void)initialize;

- (double)maxValue;
- (double)minValue;
- (void)setMaxValue:(double)a0;
- (void)setMinValue:(double)a0;
- (void)pageUp:(id)a0;
- (void)moveUp:(id)a0;
- (char)isBordered;
- (void)moveDown:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)pageDown:(id)a0;
- (void)setBordered:(char)a0;

@end
