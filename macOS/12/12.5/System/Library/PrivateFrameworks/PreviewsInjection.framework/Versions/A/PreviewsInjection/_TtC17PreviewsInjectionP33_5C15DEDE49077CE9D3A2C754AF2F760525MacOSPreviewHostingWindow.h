@interface _TtC17PreviewsInjectionP33_5C15DEDE49077CE9D3A2C754AF2F760525MacOSPreviewHostingWindow : NSWindow {
    void /* unknown type, empty encoding */ forceAppearsKey;
    void /* unknown type, empty encoding */ forceAppearsMain;
}

@property (nonatomic, readonly) BOOL canBecomeKeyWindow;
@property (nonatomic, readonly) BOOL canBecomeMainWindow;
@property (nonatomic, readonly) BOOL keyWindow;
@property (nonatomic, readonly) BOOL mainWindow;
@property (nonatomic, readonly) BOOL uv_hasKeyAppearance;
@property (nonatomic, readonly) BOOL uv_hasMainAppearance;

- (BOOL)isKeyWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)isMainWindow;

@end
