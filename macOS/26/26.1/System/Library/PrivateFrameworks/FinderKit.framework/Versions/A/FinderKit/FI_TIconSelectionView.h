@interface FI_TIconSelectionView : FI_TUpdateLayerView

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) BOOL showBorder;

+ (double)selectionPaddingForIconSize:(const struct CGSize { double x0; double x1; } *)a0;

- (double)_cornerRadius;
- (id)borderColor;
- (void)initCommon;
- (void)setHidden:(BOOL)a0;
- (id)_backgroundColor;
- (double)borderWidth;
- (void)updateLayer;
- (BOOL)accessibilityIsIgnored;

@end
