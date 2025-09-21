@class CPKCharactersView;

@interface CPKCharactersTableView : NSTableView

@property (weak) CPKCharactersView *parentCharactersView;

- (void)reloadData;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)validateProposedFirstResponder:(id)a0 forEvent:(id)a1;

@end
