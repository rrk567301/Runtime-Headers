@class NSView;

@interface AMPCollectionGridLayout : NSCollectionViewFlowLayout {
    unsigned long long columnCounts[4];
}

@property (nonatomic) double mLastCalculatedViewWidth;
@property (retain, nonatomic) NSView *mSizeTemplate;

- (void).cxx_destruct;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithXSColumnCount:(unsigned long long)a0 small:(unsigned long long)a1 medium:(unsigned long long)a2 large:(unsigned long long)a3;

@end
