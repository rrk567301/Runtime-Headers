@interface SwiftUI.AppKitWindow : NSWindow {
    void /* unknown type, empty encoding */ defaultTitleBarAppearsTransparent;
    void /* unknown type, empty encoding */ info;
    void /* unknown type, empty encoding */ update;
    void /* unknown type, empty encoding */ backgroundHost;
}

- (void).cxx_destruct;
- (id)_getUndoManager:(BOOL)a0;
- (void)exitFullScreenMode:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (void)saveFrameUsingName:(id)a0;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;

@end
