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
- (void)setDrawsBackground:(BOOL)a0;
- (void)setMaxValue:(float)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawsBackground;
- (id)accessibilityValue;
- (id)accessibilityRole;
- (float)minValue;
- (void)sizeToFit;
- (float)maxValue;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (float)value;
- (void)setMinValue:(float)a0;
- (void)resetValue;
- (void)setValue:(float)a0;
- (void)dealloc;
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
