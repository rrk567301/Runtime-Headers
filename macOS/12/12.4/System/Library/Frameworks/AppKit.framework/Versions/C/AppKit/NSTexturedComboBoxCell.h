@interface NSTexturedComboBoxCell : NSComboBoxCell

- (BOOL)drawsBackground;
- (double)_textVerticalAdjust;
- (double)_textVerticalInset;
- (BOOL)_isToolbarComboBox;

@end
