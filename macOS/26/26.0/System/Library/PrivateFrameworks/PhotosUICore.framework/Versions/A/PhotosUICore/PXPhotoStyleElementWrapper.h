@class PXPhotoStyleElement;

@interface PXPhotoStyleElementWrapper : NSObject <NSCopying> {
    PXPhotoStyleElement *_underlyingStyleElement;
}

+ (id)wrapperWithPhotoStyleElement:(id)a0;

- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)color;
- (double)intensity;
- (id)style;
- (id)defaultName;
- (void).cxx_destruct;
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
