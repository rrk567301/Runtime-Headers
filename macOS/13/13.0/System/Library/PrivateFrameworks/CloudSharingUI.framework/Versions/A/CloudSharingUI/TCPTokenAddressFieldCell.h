@interface TCPTokenAddressFieldCell : NSTokenFieldCell

- (BOOL)_needRedrawOnWindowChangedKeyState;
- (id)_fieldEditor;
- (BOOL)tokenAttachment:(id)a0 doubleClickedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 atCharacterIndex:(unsigned long long)a3;

@end
