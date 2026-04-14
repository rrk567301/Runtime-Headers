@interface TPSTipContentPanel : NSPanel

- (id)initWithConfiguration:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)initWithTipIds:(id)a0;
- (id)initWithTipId:(id)a0;
- (id)initWithTitle:(id)a0 collectionId:(id)a1;
- (id)initWithTitle:(id)a0 collectionId:(id)a1 bundleId:(id)a2;
- (id)initWithTitle:(id)a0 collectionIds:(id)a1;
- (id)initWithTitle:(id)a0 collectionIds:(id)a1 bundleId:(id)a2;
- (id)initWithTitle:(id)a0 tipId:(id)a1;
- (id)initWithTitle:(id)a0 tipId:(id)a1 bundleId:(id)a2;
- (id)initWithTitle:(id)a0 tipIds:(id)a1;
- (id)initWithTitle:(id)a0 tipIds:(id)a1 bundleId:(id)a2;

@end
