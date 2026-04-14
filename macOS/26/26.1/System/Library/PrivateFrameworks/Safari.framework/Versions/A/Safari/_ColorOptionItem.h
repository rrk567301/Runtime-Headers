@class WBSNamedColorOption, ColorPickerButton;

@interface _ColorOptionItem : NSCollectionViewItem

@property (weak, nonatomic) ColorPickerButton *colorPickerButton;
@property (retain, nonatomic) WBSNamedColorOption *color;

- (void)setSelected:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;

@end
