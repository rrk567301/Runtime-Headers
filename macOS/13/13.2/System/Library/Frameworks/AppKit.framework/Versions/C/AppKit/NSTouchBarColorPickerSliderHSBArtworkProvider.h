@interface NSTouchBarColorPickerSliderHSBArtworkProvider : NSTouchBarColorPickerSliderArtworkProvider

@property (readonly) long long representedHSBComponent;

+ (id)hueArtworkProvider;
+ (id)saturationArtworkProviderWithDisplayHue:(double)a0;
+ (id)brightnessArtworkProviderWithDisplayHue:(double)a0 displaySaturation:(double)a1;

@end
