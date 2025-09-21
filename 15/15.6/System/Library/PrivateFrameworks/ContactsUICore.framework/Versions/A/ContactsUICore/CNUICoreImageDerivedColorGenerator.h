@interface CNUICoreImageDerivedColorGenerator : NSObject

+ (id)ciContextWithHighPriority:(char)a0;
+ (unsigned long long)colorArraySize;
+ (id)colorsForImageRef:(struct CGImage { } *)a0;
+ (id)colorsForUIImage:(id)a0;
+ (id)defaultDarkGrayColors;
+ (id)defaultGrayColors;
+ (void)fetchColorsForImage:(id)a0 ciContext:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (id)tintedUIColorsFromUIColors:(id)a0 isLight:(char)a1;

@end
