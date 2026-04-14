@class NSTextField;

@interface GKStatusCell : GKCollectionViewCell

@property (retain, nonatomic) NSTextField *statusLabel;

- (void)setStatus:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canRemoveItem;

@end
