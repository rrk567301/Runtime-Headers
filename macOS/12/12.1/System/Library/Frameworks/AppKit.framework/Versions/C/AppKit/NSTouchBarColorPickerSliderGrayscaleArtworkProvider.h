@interface NSTouchBarColorPickerSliderGrayscaleArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider

- (BOOL)isEqual:(id)a0;
- (void)updateRootTrackLayer:(id)a0 color:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (id)accessibilityValueStringForValue:(double)a0;
- (double)valueFromAccessibilityValueString:(id)a0;
- (id)sliderLabel;
- (id)formattedValue:(double)a0;
- (double)lightnessForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;

@end
