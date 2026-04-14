@interface _TtC6AppKitP33_B20AA1257E16D4018E27D921D92487C843_NSTextFormattingFontPointSizeComponentView : _TtC6AppKitP33_B20AA1257E16D4018E27D921D92487C829_NSTextFormattingBaseComboBox <NSComboBoxDataSource> {
    void /* unknown type, empty encoding */ fontSizes;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)comboBoxSelectionDidChange:(id)a0;
- (long long)numberOfItemsInComboBox:(id)a0;
- (void)textDidEndEditing:(id)a0;

@end
