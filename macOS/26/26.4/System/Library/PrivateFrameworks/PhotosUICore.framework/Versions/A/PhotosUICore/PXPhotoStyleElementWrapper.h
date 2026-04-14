@class PXPhotoStyleElement;

@interface PXPhotoStyleElementWrapper : NSObject <NSCopying> {
    PXPhotoStyleElement *_underlyingStyleElement;
}

+ (id)wrapperWithPhotoStyleElement:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)style;
- (id)defaultName;
- (void).cxx_destruct;
- (double)color;
- (id)identifier;
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
