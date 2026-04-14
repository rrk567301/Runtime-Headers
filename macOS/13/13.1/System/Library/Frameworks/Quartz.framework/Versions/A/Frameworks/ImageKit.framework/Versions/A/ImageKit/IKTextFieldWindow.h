@interface IKTextFieldWindow : NSWindow {
    id _fieldDelegate;
    id _textView;
    float _maxWidth;
    struct CGPoint { double x; double y; } _anchorPoint;
    struct CGSize { double width; double height; } _initialTitleSize;
    float _emptyStringHeight;
}

@property int resizingMask;
@property (retain) Class textfieldClass;

- (void)dealloc;
- (void)endEditing;
- (BOOL)isOpaque;
- (BOOL)canBecomeKeyWindow;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)resignKeyWindow;
- (void)controlTextDidEndEditing:(id)a0;
- (void)sendEvent:(id)a0;
- (void)setMaxWidth:(double)a0;
- (id)textField;
- (BOOL)_canBecomeSecondaryKeyWindow;
- (void)_positionWindow;
- (void)_textDidChange:(id)a0;
- (id)textEditor;
- (id)initWithAnchorPoint:(struct CGPoint { double x0; double x1; })a0 titleSize:(struct CGSize { double x0; double x1; })a1 delegate:(id)a2;
- (void)prepareEditorWithString:(id)a0 attributes:(id)a1;
- (void)startEditingWithEvent:(id)a0 text:(id)a1;

@end
