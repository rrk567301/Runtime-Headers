@interface InputDeviceUtil : NSObject

+ (id)tintImage:(id)a0 withColor:(id)a1;
+ (id)_keyboardRegionSuffixForType:(long long)a0;
+ (id)_colorForDevice:(id)a0;
+ (id)baseColorMapForDevice:(long long)a0;
+ (long long)regionTypeForDevice:(id)a0;
+ (id)_pairingTrackpadImageForDevice:(id)a0;
+ (id)_pairingKeyboardImageForDevice:(id)a0;
+ (id)_enclosureColorSuffix;
+ (id)_imageWithFallbackForName:(id)a0 suffix:(id)a1;
+ (id)_keyboardTypeSuffix;
+ (id)pairingImageForDevice:(id)a0 deviceType:(long long)a1;
+ (id)sidebarImageForDeviceType:(long long)a0;

@end
