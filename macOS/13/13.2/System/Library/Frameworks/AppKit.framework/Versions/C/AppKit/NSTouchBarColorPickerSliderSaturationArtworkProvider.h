@interface NSTouchBarColorPickerSliderSaturationArtworkProvider : NSTouchBarColorPickerSliderHSBArtworkProvider {
    double _displayHue;
}

- (BOOL)isEqual:(id)a0;
- (void)updateRootTrackLayer:(id)a0 color:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (double)valueFromAccessibilityValueString:(id)a0;
- (id)accessibilityValueStringForValue:(double)a0;
- (id)formattedValue:(double)a0;
- (id)sliderLabel;
- (double)lightnessForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (long long)representedHSBComponent;
- (id)initWithDisplayHue:(double)a0;

@end
