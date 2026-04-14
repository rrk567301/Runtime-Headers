@interface SwiftUI._TestAppWindow : NSWindow {
    void /* unknown type, empty encoding */ hitTestingForAccessibilityCount;
}

@property (nonatomic, readonly) BOOL swiftUI_isHitTestingForAccessibility;

- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (BOOL)_allowsAnyValidResponder;

@end
