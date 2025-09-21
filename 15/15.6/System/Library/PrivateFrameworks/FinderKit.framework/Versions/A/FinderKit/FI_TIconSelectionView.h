@interface FI_TIconSelectionView : FI_TUpdateLayerView

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL showBorder;

+ (double)selectionPaddingForIconSize:(const struct CGSize { double x0; double x1; } *)a0;

- (void)setHidden:(char)a0;
- (id)borderColor;
- (id)_backgroundColor;
- (double)_cornerRadius;
- (char)accessibilityIsIgnored;
- (double)borderWidth;
- (void)updateLayer;
- (void)initCommon;

@end
