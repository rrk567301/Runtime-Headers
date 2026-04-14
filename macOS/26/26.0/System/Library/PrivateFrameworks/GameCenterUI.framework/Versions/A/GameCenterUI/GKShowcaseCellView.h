@class NSUICollectionViewCell;

@interface GKShowcaseCellView : NSUICollectionReusableView

@property (retain, nonatomic) NSUICollectionViewCell *cell;
@property (nonatomic) SEL touchedShowcaseCellAction;

+ (BOOL)requiresConstraintBasedLayout;

- (void)mouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForText;

@end
