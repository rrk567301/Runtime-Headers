@interface _TtC6AppKitP33_05EA0EB8E781FFE22747790FC22932B128FontPanelFontSizeComboButton : NSComboBox <NSComboBoxDataSource, NSComboBoxDelegate> {
    void /* unknown type, empty encoding */ fontSizeDelegate;
    void /* unknown type, empty encoding */ selectedFontSize;
    void /* unknown type, empty encoding */ fieldEditor;
    void /* unknown type, empty encoding */ fontSizes;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_fieldEditor;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)comboBoxSelectionDidChange:(id)a0;
- (long long)numberOfItemsInComboBox:(id)a0;
- (void)textDidEndEditing:(id)a0;

@end
