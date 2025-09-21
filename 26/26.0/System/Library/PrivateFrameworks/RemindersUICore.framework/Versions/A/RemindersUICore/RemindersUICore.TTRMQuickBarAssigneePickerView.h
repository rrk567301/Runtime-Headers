@interface RemindersUICore.TTRMQuickBarAssigneePickerView : RemindersUICore.TTRMQuickBarEntryView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ assigneeName;
    void /* unknown type, empty encoding */ internalIsEditingTextField;
}

- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityEnabled;
- (void)backgroundClickAction:(id)a0;
- (void)clearButtonAction:(id)a0;

@end
