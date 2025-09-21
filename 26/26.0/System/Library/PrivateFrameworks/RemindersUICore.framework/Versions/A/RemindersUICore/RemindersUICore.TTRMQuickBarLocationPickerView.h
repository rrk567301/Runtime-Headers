@interface RemindersUICore.TTRMQuickBarLocationPickerView : RemindersUICore.TTRMQuickBarEntryView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ internalIsEditingTextField;
    void /* unknown type, empty encoding */ deferredFocusAction;
    void /* unknown type, empty encoding */ internalLocation;
}

@property (nonatomic, readonly) BOOL acceptsFirstResponder;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)backgroundClickAction:(id)a0;
- (void)clearButtonAction:(id)a0;

@end
