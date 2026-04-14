@interface TextFieldCellPlus : NSTextFieldCell {
    BOOL _dfrAccessoriesDisabled;
}

+ (id)_fieldEditorWithDisabledDFRAccessories;

- (id)fieldEditorForView:(id)a0;
- (void)disableDFRAccessories;

@end
