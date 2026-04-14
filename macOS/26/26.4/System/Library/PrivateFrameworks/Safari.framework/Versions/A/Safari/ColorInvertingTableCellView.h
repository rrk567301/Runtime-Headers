@class NSMapTable;

@interface ColorInvertingTableCellView : NSTableCellView {
    NSMapTable *_textFieldsToDefaultColors;
}

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (void)awakeFromNib;
- (void)_recursivelySetEnclosedTextFieldsToDefaultColor;
- (void)_recursivelySetEnclosedTextFieldsToWhite;
- (void)updateImageViewsWhenTextFieldsAreSetToDefaultColor;
- (void)updateImageViewsWhenTextFieldsAreSetToWhite;

@end
