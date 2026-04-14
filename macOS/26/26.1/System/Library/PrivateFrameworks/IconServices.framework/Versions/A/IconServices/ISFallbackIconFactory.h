@interface ISFallbackIconFactory : NSObject {
    struct CGImage { } *_cgImage;
    unsigned long long _idiom;
}

- (void)dealloc;
- (id)_createTintedFallbackIcon_macOS;
- (id)_createDarkFallbackIcon_iOS;
- (id)_createDarkFallbackIcon_macOS;
- (id)_createLightFallbackIcon_iOS;
- (id)_createLightFallbackIcon_macOS;
- (id)_createTintedFallbackIcon_iOS;
- (id)createDarkFallbackIcon;
- (id)createLightFallbackIcon;
- (id)createTintedFallbackIcon;
- (id)initWithCGImage:(struct CGImage { } *)a0 idiom:(unsigned long long)a1;

@end
