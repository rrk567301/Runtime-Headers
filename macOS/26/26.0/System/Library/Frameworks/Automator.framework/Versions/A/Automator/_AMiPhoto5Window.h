@interface _AMiPhoto5Window : _AMiPhoto5Item

- (int)id;
- (BOOL)visible;
- (void)setIndex:(int)a0;
- (int)index;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setVisible:(BOOL)a0;
- (void)setName:(id)a0;
- (id)document;
- (id)name;
- (BOOL)floating;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
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
