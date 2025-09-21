@interface FI_TButtonCell : NSButtonCell

@property (nonatomic) BOOL acceptsFirstMouse;

- (long long)nextState;
- (id)initWithCoder:(id)a0;
- (void)initCommon;
- (id)initImageCell:(id)a0;
- (id)initTextCell:(id)a0;
- (BOOL)acceptsFirstMouseFE:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;

@end
