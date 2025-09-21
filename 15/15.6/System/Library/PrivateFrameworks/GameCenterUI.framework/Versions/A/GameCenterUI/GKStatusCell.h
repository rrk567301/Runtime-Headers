@class NSTextField;

@interface GKStatusCell : GKCollectionViewCell

@property (retain, nonatomic) NSTextField *statusLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStatus:(id)a0;
- (char)canRemoveItem;

@end
