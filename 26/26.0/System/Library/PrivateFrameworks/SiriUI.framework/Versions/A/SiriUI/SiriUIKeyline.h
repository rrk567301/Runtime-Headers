@class NSView, NSColor;

@interface SiriUIKeyline : NSView

@property (nonatomic, getter=_isVeritical, setter=_setVertical:) BOOL veritical;
@property (retain) NSView *keylineView;
@property (nonatomic) long long keylineType;
@property (nonatomic) double customLeftPadding;
@property (nonatomic) double customRightPadding;
@property (retain, nonatomic) NSColor *customBackgroundColor;

+ (id)keyline;
+ (id)verticalKeyline;
+ (id)keylineForSelectableRow;
+ (double)keylineThickness;
+ (id)keylineWithDefaultInsets;
+ (id)keylineWithKeylineType:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateLayer;
- (void)commonInit;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 useAutolayout:(BOOL)a1;
- (id)initWithKeylineType:(long long)a0;

@end
