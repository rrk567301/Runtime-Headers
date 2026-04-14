@interface NSTexturedComboBoxCell : NSComboBoxCell

- (BOOL)drawsBackground;
- (BOOL)_isToolbarComboBox;
- (double)_textVerticalInset;
- (double)_textVerticalAdjust;

@end
