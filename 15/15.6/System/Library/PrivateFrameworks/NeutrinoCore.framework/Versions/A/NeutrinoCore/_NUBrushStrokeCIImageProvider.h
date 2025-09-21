@class NUBrushStroke;

@interface _NUBrushStrokeCIImageProvider : NSObject {
    NUBrushStroke *_stroke;
    char _closed;
    long long _pressureMode;
    struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } _extent;
    char _filled;
}

- (void).cxx_destruct;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (id)initWithStroke:(id)a0 closed:(char)a1 pressureMode:(long long)a2 filled:(char)a3;

@end
