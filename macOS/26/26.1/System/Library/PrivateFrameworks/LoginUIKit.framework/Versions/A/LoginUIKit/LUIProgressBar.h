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

- (void)_commonInit;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)setValue:(float)a0;
- (id)accessibilityValue;
- (float)minValue;
- (BOOL)drawsBackground;
- (void)setMinValue:(float)a0;
- (void)setMaxValue:(float)a0;
- (void)resetValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)maxValue;
- (float)value;
- (id)accessibilityRole;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setDrawsBackground:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
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
