@interface FI_TIconSelectionView : FI_TUpdateLayerView

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL showBorder;

+ (double)selectionPaddingForIconSize:(const struct CGSize { double x0; double x1; } *)a0;

- (void)updateLayer;
- (id)borderColor;
- (double)_cornerRadius;
- (id)_backgroundColor;
- (double)borderWidth;
- (void)initCommon;
- (void)setHidden:(BOOL)a0;
- (BOOL)accessibilityIsIgnored;

@end
