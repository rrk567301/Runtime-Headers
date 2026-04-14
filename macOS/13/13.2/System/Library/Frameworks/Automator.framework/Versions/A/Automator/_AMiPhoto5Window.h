@interface _AMiPhoto5Window : _AMiPhoto5Item

- (id)name;
- (void)setName:(id)a0;
- (void)setIndex:(int)a0;
- (int)index;
- (id)document;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)titled;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisible:(BOOL)a0;
- (BOOL)visible;
- (BOOL)floating;
- (BOOL)zoomed;
- (BOOL)miniaturized;
- (BOOL)miniaturizable;
- (BOOL)resizable;
- (BOOL)zoomable;
- (int)id;
- (void)setZoomed:(BOOL)a0;
- (BOOL)modal;
- (BOOL)closeable;
- (void)setMiniaturized:(BOOL)a0;

@end
