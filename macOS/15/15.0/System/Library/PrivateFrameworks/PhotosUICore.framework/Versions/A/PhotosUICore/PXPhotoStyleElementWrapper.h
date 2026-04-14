@class PXPhotoStyleElement;

@interface PXPhotoStyleElementWrapper : NSObject <NSCopying> {
    PXPhotoStyleElement *_underlyingStyleElement;
}

@property (copy, nonatomic) PXPhotoStyleElement *style;

+ (id)allDefaultStyles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (double)color;
- (id)defaultName;
- (double)intensity;
- (void)resetToDefault;
- (id)cast;
- (double)defaultColor;
- (double)tone;
- (void)updateWithTone:(double)a0 color:(double)a1 intensity:(double)a2;
- (double)defaultIntensity;
- (double)defaultTone;
- (BOOL)hasNonDefaultValues;
- (id)initWithPhotoStyleElement:(id)a0;

@end
