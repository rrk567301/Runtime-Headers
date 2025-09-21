@interface OKDocumentViewProxy : OFNSView

- (void)dealloc;
- (void)commonInit;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)documentViewController;
- (char)areEventsRunning;

@end
