@interface SwiftUI.SwiftUISegmentedControl : NSSegmentedControl {
    void /* unknown type, empty encoding */ shortcuts;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
}

@property (class, nonatomic) Class cellClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;

@end
