@interface CIImageRowReader : NSObject <ImageRowReading> {
    unsigned long long height;
    unsigned long long width;
    unsigned long long bpr;
    void *data;
    short red;
    short green;
    short blue;
    short alpha;
    struct CGColorSpace { } *cs;
}

+ (id)withDictionary:(id)a0;
+ (id)forImage:(id)a0 downscaleToMax:(unsigned int)a1 colorspace:(struct CGColorSpace { } *)a2 usingContext:(id)a3;
+ (id)forImage:(id)a0 usingContext:(id)a1;
+ (id)forImage:(id)a0 usingContext:(id)a1 colorspace:(struct CGColorSpace { } *)a2;
+ (id)fromImage:(struct CGImage { } *)a0;
+ (id)fromImageFile:(id)a0;

- (short)blue;
- (short)green;
- (short)red;
- (void)dealloc;
- (unsigned long long)width;
- (short)alpha;
- (id)init;
- (unsigned long long)height;
- (const char *)rowAtIndex:(unsigned int)a0;
- (void)_dumpImage:(id)a0 colorspace:(struct CGColorSpace { } *)a1;
- (unsigned int)bytesPerPixel;
- (void)dumpImage:(id)a0;
- (void)dumpImageAsDeviceRGB:(id)a0;
- (void)dumpImageAsDict:(id)a0;

@end
