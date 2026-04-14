@interface _AMiPhoto5Window : _AMiPhoto5Item

- (id)document;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)visible;
- (int)index;
- (void)setVisible:(BOOL)a0;
- (void)setIndex:(int)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setName:(id)a0;
- (BOOL)floating;
- (id)name;
- (int)id;
- (void)setZoomed:(BOOL)a0;
- (BOOL)resizable;
- (BOOL)modal;
- (BOOL)closeable;
- (BOOL)miniaturizable;
- (BOOL)miniaturized;
- (void)setMiniaturized:(BOOL)a0;
- (BOOL)titled;
- (BOOL)zoomable;
- (BOOL)zoomed;

@end
