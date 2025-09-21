@interface _AMiPhoto5Window : _AMiPhoto5Item

- (id)name;
- (void)setName:(id)a0;
- (int)index;
- (void)setIndex:(int)a0;
- (id)document;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisible:(char)a0;
- (char)visible;
- (char)floating;
- (int)id;
- (void)setZoomed:(char)a0;
- (char)resizable;
- (char)modal;
- (char)closeable;
- (char)miniaturizable;
- (char)miniaturized;
- (void)setMiniaturized:(char)a0;
- (char)titled;
- (char)zoomable;
- (char)zoomed;

@end
