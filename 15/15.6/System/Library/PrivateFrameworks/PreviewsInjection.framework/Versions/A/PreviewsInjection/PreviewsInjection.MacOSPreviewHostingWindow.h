@interface PreviewsInjection.MacOSPreviewHostingWindow : NSWindow {
    void /* unknown type, empty encoding */ forceAppearsKey;
    void /* unknown type, empty encoding */ forceAppearsMain;
}

@property (nonatomic, readonly) char canBecomeKeyWindow;
@property (nonatomic, readonly) char canBecomeMainWindow;
@property (nonatomic, readonly) char keyWindow;
@property (nonatomic, readonly) char mainWindow;

- (char)hasKeyAppearance;
- (char)hasMainAppearance;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (char)isKeyWindow;
- (char)isMainWindow;

@end
