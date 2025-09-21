@interface GameCenterUI.SectionHeaderView : NSView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ achievementsTheme;
    void /* unknown type, empty encoding */ titleLabel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) char wantsUpdateLayer;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
