@interface _TtC7SwiftUIP33_00AAB847C3060B4FF7A299E87C10010C23SheetPresentationWindow : NSWindow {
    void /* unknown type, empty encoding */ pendingSheetParent;
    void /* unknown type, empty encoding */ behavior;
    void /* unknown type, empty encoding */ onDismiss;
    void /* unknown type, empty encoding */ handleEscapeKey;
    void /* unknown type, empty encoding */ hostView;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)parentWindowSizeChanged:(id)a0;

@end
