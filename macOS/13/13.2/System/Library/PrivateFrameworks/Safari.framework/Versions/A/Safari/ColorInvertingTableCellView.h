@class NSMapTable;

@interface ColorInvertingTableCellView : NSTableCellView {
    NSMapTable *_textFieldsToDefaultColors;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (void)_recursivelySetEnclosedTextFieldsToWhite;
- (void)_recursivelySetEnclosedTextFieldsToDefaultColor;

@end
