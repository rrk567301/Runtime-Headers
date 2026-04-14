@class NSColor, NSLayoutXAxisAnchor, NSLayoutConstraint;
@protocol AMPScrubberDelegate;

@interface AMPScrubber : AMPBasicSlider

@property (nonatomic) double _loadedMinValue;
@property (nonatomic) double _loadedMaxValue;
@property (nonatomic) double _notedPositionValue;
@property (copy, nonatomic) NSColor *_notedPositionColor;
@property (retain, nonatomic) NSLayoutXAxisAnchor *knobAnchor;
@property (retain, nonatomic) NSLayoutConstraint *knobAnchorConstraint;
@property (nonatomic) BOOL _blockDisplayForReal;
@property (nonatomic) BOOL _needsDisplayWhenUnblocked;
@property (nonatomic) BOOL isVoiceOverFocused;
@property (nonatomic) BOOL isVoiceOverCommand;
@property (nonatomic) double cachedAccessibilityValue;
@property (nonatomic) double loadedMinValue;
@property (nonatomic) double loadedMaxValue;
@property (retain, nonatomic) NSColor *loadedFillColor;
@property (nonatomic) double notedPositionValue;
@property (retain, nonatomic) NSColor *notedPositionColor;
@property (nonatomic) BOOL blockDisplay;
@property (weak, nonatomic) id<AMPScrubberDelegate> ampDelegate;

+ (void)initialize;
+ (Class)cellClass;

- (void)setMaxValue:(double)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setMinValue:(double)a0;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNilValueForKey:(id)a0;
- (BOOL)allowsVibrancy;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformIncrement;
- (void)setAccessibilityFocused:(BOOL)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)updateCell:(id)a0;
- (Class)valueClassForBinding:(id)a0;
- (id)propertyKeysForViewSpy;
- (void)updateKnobAnchor;

@end
