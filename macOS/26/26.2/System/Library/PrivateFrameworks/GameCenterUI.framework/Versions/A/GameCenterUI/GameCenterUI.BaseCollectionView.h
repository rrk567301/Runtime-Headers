@class JUTraitCollection;

@interface GameCenterUI.BaseCollectionView : NSCollectionView {
    void /* unknown type, empty encoding */ orthogonalPagingMetricsProvider;
}

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;

- (void)addSubview:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
