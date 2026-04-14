@class NSPopUpButtonCell, NSTableColumn;

@interface ABPropertyHeaderCell : NSTableHeaderCell {
    NSPopUpButtonCell *_popup;
    NSTableColumn *_currentColumn;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeAllItems;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (void)setFont:(id)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)removeItemWithIdentifier:(id)a0;
- (id)popup;
- (void)_selectItem:(id)a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3 inColumn:(id)a4;
- (long long)indexOfIdentifier:(id)a0;
- (void)setTitle:(id)a0 ofItemWithIdentifier:(id)a1;
- (void)addItemWithTitle:(id)a0 andIdentifier:(id)a1;
- (void)selectItemWithIdentifier:(id)a0;
- (BOOL)isPoint:(struct CGPoint { double x0; double x1; })a0 inRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
