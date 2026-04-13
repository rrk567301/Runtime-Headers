@class NSView, NSColor;

@interface SiriUIKeyline : NSView

@property (nonatomic, getter=_isVeritical, setter=_setVertical:) BOOL veritical;
@property (retain) NSView *keylineView;
@property (nonatomic) long long keylineType;
@property (nonatomic) double customLeftPadding;
@property (nonatomic) double customRightPadding;
@property (retain, nonatomic) NSColor *customBackgroundColor;

+ (id)keyline;
+ (double)keylineThickness;
+ (id)keylineWithDefaultInsets;
+ (id)keylineForSelectableRow;
+ (id)verticalKeyline;
+ (id)keylineWithKeylineType:(long long)a0;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)wantsLayer;
- (void)updateConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)commonInit;
- (id)initWithKeylineType:(long long)a0;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 useAutolayout:(BOOL)a1;

@end
