@class NSMapTable;

@interface ColorInvertingTableCellView : NSTableCellView {
    NSMapTable *_textFieldsToDefaultColors;
}

- (void)setBackgroundStyle:(long long)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_recursivelySetEnclosedTextFieldsToDefaultColor;
- (void)_recursivelySetEnclosedTextFieldsToWhite;
- (void)updateImageViewsWhenTextFieldsAreSetToDefaultColor;
- (void)updateImageViewsWhenTextFieldsAreSetToWhite;

@end
