@class NSTextField, NSBezierPath, NSView, NSNumberFormatter, SOLabeledBadgeStrokeView;

@interface SOLabeledBadgeView : NSView

@property (class, readonly) NSNumberFormatter *numberFormatter;

@property (retain, nonatomic) NSView *backgroundView;
@property (retain, nonatomic) NSTextField *labelView;
@property (retain, nonatomic) SOLabeledBadgeStrokeView *strokeView;
@property (nonatomic) struct CGSize { double width; double height; } placeholderIntrinsicContentSize;
@property (readonly) NSBezierPath *_maskPath;

+ (id)_labelFont;
+ (id)_sizingStringForNumberOfDigits:(unsigned long long)a0;
+ (void)cacheView:(id)a0;
+ (id)getCachedViewForLabel:(id)a0 placeholder:(id)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)sizeToFit;
- (void).cxx_destruct;
- (id)_maskImage;
- (struct CGSize { double x0; double x1; })_intrinsicContentSize;
- (id)initWithLabel:(id)a0 placeholder:(id)a1 alignment:(long long)a2;

@end
