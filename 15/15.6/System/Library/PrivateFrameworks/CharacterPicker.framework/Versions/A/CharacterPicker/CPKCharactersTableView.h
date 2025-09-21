@class CPKCharactersView;

@interface CPKCharactersTableView : NSTableView

@property CPKCharactersView *parentCharactersView;

- (char)acceptsFirstMouse:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;
- (char)mouseDownCanMoveWindow;
- (void)reloadData;
- (char)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;

@end
