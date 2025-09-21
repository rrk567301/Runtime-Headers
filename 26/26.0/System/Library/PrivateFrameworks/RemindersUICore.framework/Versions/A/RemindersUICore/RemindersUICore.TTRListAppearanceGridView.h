@interface RemindersUICore.TTRListAppearanceGridView : NSView {
    void /* unknown type, empty encoding */ preferredMaxLayoutWidth;
    void /* unknown type, empty encoding */ horizontalMargins;
    void /* unknown type, empty encoding */ topMargin;
    void /* unknown type, empty encoding */ arrangedSubviews;
    void /* unknown type, empty encoding */ verticalGap;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) BOOL allowsVibrancy;
@property (nonatomic) struct CGSize { double x0; double x1; } badgeSize;
@property (nonatomic) double minimumGap;
@property (nonatomic, readonly) BOOL flipped;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
