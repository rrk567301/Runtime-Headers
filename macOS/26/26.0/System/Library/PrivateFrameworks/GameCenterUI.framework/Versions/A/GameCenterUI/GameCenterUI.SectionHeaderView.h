@interface GameCenterUI.SectionHeaderView : NSView <NSCollectionViewElement> {
    void /* unknown type, empty encoding */ achievementsTheme;
    void /* unknown type, empty encoding */ titleLabel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) BOOL wantsUpdateLayer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
