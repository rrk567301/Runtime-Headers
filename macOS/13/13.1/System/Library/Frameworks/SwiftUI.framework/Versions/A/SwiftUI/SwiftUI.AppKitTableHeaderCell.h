@interface SwiftUI.AppKitTableHeaderCell : NSTableHeaderCell {
    void /* unknown type, empty encoding */ clientBackgroundColor;
    void /* unknown type, empty encoding */ drawsBezel;
}

- (id)copyWithZone:(void *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initTextCell:(id)a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)_drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlighted:(BOOL)a1 inView:(id)a2;

@end
