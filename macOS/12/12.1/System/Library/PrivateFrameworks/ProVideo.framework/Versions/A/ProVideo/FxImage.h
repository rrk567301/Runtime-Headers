@interface FxImage : NSObject <NSCopying> {
    struct FxImagePriv { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; void /* function */ *x6; void *x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; struct FxRect { int x0; int x1; int x2; int x3; } x9; id x10; struct CGColorSpace *x11; unsigned long long x12; int x13; } *_imagePriv;
}

+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)size;
- (void)dealloc;
- (id)init;
- (unsigned long long)bytes;
- (unsigned long long)version;
- (id)initWithInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a0;
- (unsigned long long)imageType;
- (void)setPixelFormat:(unsigned long long)a0;
- (void)setWidth:(unsigned long long)a0;
- (void)setHeight:(unsigned long long)a0;
- (void)setDepth:(unsigned long long)a0;
- (unsigned long long)width;
- (unsigned long long)height;
- (unsigned long long)depth;
- (unsigned long long)pixelFormat;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (struct CGColorSpace { } *)colorSpace;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)field;
- (void)setField:(unsigned long long)a0;
- (void)setImageType:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })imageInfo;
- (unsigned long long)origin;
- (void)setOrigin:(unsigned long long)a0;
- (void)setBytes:(unsigned long long)a0;
- (unsigned long long)colorInfo;
- (void)setColorInfo:(unsigned long long)a0;
- (void)setScaleX:(double)a0;
- (void)setScaleY:(double)a0;
- (double)scaleX;
- (double)scaleY;
- (struct FxRect { int x0; int x1; int x2; int x3; })dod;
- (BOOL)isPremultiplied;
- (void)setWidth:(unsigned long long)a0 andHeight:(unsigned long long)a1;
- (void)setIsPremultiplied:(BOOL)a0;
- (id)pixelTransform;
- (void)setDod:(struct FxRect { int x0; int x1; int x2; int x3; })a0;
- (double)pixelAspect;
- (id)inversePixelTransform;
- (void)setFieldOrder:(unsigned long long)a0;
- (void)setPixelTransform:(id)a0;
- (unsigned long long)numActiveChannels;
- (unsigned long long)fieldOrder;
- (BOOL)containsPointX:(int)a0 Y:(int)a1;
- (void)setNumActiveChannels:(unsigned long long)a0;
- (void)setPixelAspect:(double)a0;
- (unsigned long long)fxColorPrimaries;
- (void)setFxColorPrimaries:(unsigned long long)a0;
- (void)setEyeType:(int)a0;
- (int)eyeType;
- (void)setDeallocCallback:(void /* function */ *)a0 refcon:(void *)a1;
- (BOOL)_verifyImage;

@end
