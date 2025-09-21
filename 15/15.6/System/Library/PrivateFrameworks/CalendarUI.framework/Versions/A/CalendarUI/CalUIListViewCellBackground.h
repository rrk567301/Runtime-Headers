@interface CalUIListViewCellBackground : CalUILayerBackedView {
    double _cornerRadius;
}

+ (char)drawsBackgroundForEvent:(id)a0;

- (void)layout;
- (id)initWithCornerRadius:(double)a0;
- (id)_angleStripedBackgroundColor;
- (id)_angleStripedBackgroundImage;
- (void)_configureLayer:(id)a0;
- (void)_updateBackgroundWithSolidColor:(id)a0 stripedColor:(id)a1 dimmed:(char)a2;
- (long long)_userInterfaceStyle;
- (void)updateBackgroundColorForEvent:(id)a0 dimmed:(char)a1 dragPreview:(char)a2;

@end
