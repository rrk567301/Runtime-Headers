@interface SwiftUI.AppKitSearchField : NSSearchField {
    void /* unknown type, empty encoding */ suggestionsBridge;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
    void /* unknown type, empty encoding */ swiftUISearchDelegate;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (BOOL)becomeFirstResponder;
- (void)viewWillMoveToWindow:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilitySharedFocusElements;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)textViewDidChangeSelection:(id)a0;

@end
