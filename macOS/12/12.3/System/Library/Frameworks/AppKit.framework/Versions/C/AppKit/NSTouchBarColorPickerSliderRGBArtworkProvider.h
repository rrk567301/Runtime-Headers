@interface NSTouchBarColorPickerSliderRGBArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider {
    long long _rgbComponent;
    long long _entryMode;
}

+ (id)redArtworkProviderWithEntryMode:(long long)a0;
+ (id)greenArtworkProviderWithEntryMode:(long long)a0;
+ (id)blueArtworkProviderWithEntryMode:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (void)updateRootTrackLayer:(id)a0 color:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (id)accessibilityValueStringForValue:(double)a0;
- (double)valueFromAccessibilityValueString:(id)a0;
- (id)sliderLabel;
- (id)formattedValue:(double)a0;
- (double)lightnessForValue:(double)a0 baseColor:(id)a1 horizontallyFlipped:(BOOL)a2 allowedColorSpaces:(id)a3;
- (id)initWithComponent:(long long)a0 entryMode:(long long)a1;

@end
