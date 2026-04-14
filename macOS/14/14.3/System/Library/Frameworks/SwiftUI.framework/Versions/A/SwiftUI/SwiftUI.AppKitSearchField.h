@interface SwiftUI.AppKitSearchField : SwiftUISearchField {
    void /* unknown type, empty encoding */ swiftUIDelegate;
    void /* unknown type, empty encoding */ windowBridge;
    void /* unknown type, empty encoding */ monitor;
    void /* unknown type, empty encoding */ isPresenting;
    void /* unknown type, empty encoding */ suggestionsView;
}

@property (class, nonatomic) Class cellClass;

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilitySharedFocusElements;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textView:(id)a0 doCommandBySelector:(SEL)a1;
- (void)viewWillMoveToWindow:(id)a0;

@end
