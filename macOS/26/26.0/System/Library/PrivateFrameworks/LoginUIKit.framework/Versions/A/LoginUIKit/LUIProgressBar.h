@class NSImage, NSTimer, NSDate;

@interface LUIProgressBar : NSView {
    NSImage *_emptyLeftCap;
    NSImage *_emptyMiddle;
    NSImage *_emptyRightCap;
    NSImage *_fullLeftCap;
    NSImage *_fullMiddle;
    NSImage *_fullRightCap;
    NSTimer *_updateTimer;
    float _value;
    float _minValue;
    float _maxValue;
    float _currentValue;
    float _step;
    int _progressBarStyle;
    BOOL _drawsBackground;
    BOOL _animates;
    id /* block */ _animationCompleteBlock;
    NSDate *_endDate;
}

@property (readonly, getter=isIndeterminate) BOOL indeterminate;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setValue:(float)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setDrawsBackground:(BOOL)a0;
- (float)value;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)drawsBackground;
- (void)_commonInit;
- (id)accessibilityValue;
- (void)resetValue;
- (void)setMaxValue:(float)a0;
- (id)accessibilityRole;
- (void)setMinValue:(float)a0;
- (void)sizeToFit;
- (float)maxValue;
- (float)minValue;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityValueAttribute;
- (id)accessibilityValueDescription;
- (BOOL)animates;
- (void)setAnimates:(BOOL)a0;
- (void)_updateCurrentValue:(id)a0;
- (int)progressBarStyle;
- (void)setAnimationCompleteCallback:(id /* block */)a0;
- (void)setProgressBarStyle:(int)a0;

@end
