@interface _AMiPhoto5Window : _AMiPhoto5Item

- (id)name;
- (void)setName:(id)a0;
- (int)index;
- (void)setIndex:(int)a0;
- (id)document;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)titled;
- (void)setVisible:(BOOL)a0;
- (BOOL)visible;
- (BOOL)zoomed;
- (BOOL)miniaturized;
- (BOOL)miniaturizable;
- (BOOL)resizable;
- (BOOL)zoomable;
- (BOOL)floating;
- (int)id;
- (void)setZoomed:(BOOL)a0;
- (BOOL)modal;
- (BOOL)closeable;
- (void)setMiniaturized:(BOOL)a0;

@end
