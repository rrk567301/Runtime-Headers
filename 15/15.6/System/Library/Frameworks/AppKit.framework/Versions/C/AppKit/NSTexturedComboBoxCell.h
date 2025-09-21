@interface NSTexturedComboBoxCell : NSComboBoxCell

- (char)drawsBackground;
- (char)_isToolbarComboBox;
- (double)_textVerticalAdjust;
- (double)_textVerticalInset;

@end
