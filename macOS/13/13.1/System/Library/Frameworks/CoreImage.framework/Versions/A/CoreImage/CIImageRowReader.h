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

+ (id)fromImageFile:(id)a0;
+ (id)fromImage:(struct CGImage { } *)a0;
+ (id)forImage:(id)a0 downscaleToMax:(unsigned int)a1 colorspace:(struct CGColorSpace { } *)a2 usingContext:(id)a3;
+ (id)withDictionary:(id)a0;
+ (id)forImage:(id)a0 usingContext:(id)a1;
+ (id)forImage:(id)a0 usingContext:(id)a1 colorspace:(struct CGColorSpace { } *)a2;

- (void)dealloc;
- (id)init;
- (unsigned long long)width;
- (unsigned long long)height;
- (short)alpha;
- (const char *)rowAtIndex:(unsigned int)a0;
- (short)red;
- (short)green;
- (short)blue;
- (unsigned int)bytesPerPixel;
- (void)_dumpImage:(id)a0 colorspace:(struct CGColorSpace { } *)a1;
- (void)dumpImage:(id)a0;
- (void)dumpImageAsDeviceRGB:(id)a0;
- (void)dumpImageAsDict:(id)a0;

@end
