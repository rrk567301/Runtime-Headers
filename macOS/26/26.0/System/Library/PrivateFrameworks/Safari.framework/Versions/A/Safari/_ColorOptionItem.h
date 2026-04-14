@class WBSNamedColorOption, ColorPickerButton;

@interface _ColorOptionItem : NSCollectionViewItem

@property (weak, nonatomic) ColorPickerButton *colorPickerButton;
@property (retain, nonatomic) WBSNamedColorOption *color;

- (void)loadView;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
