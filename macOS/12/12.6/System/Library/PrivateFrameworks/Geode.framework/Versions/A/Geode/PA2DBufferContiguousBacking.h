@class PFCopyOnWriteInterest;

@interface PA2DBufferContiguousBacking : NSObject {
    unsigned long long _width;
    unsigned long long _height;
    int _format;
    struct CGColorSpace { } *_colorSpace;
    PFCopyOnWriteInterest *_buffer;
    long long _rowBytes;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void *)bytes;
- (void).cxx_destruct;
- (unsigned long long)width;
- (unsigned long long)height;
- (int)format;
- (void)setColorSpace:(struct CGColorSpace { } *)a0;
- (struct CGColorSpace { } *)colorSpace;
- (long long)rowBytes;
- (unsigned long long)tileCount;
- (void)getPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 destPtrRowBytes:(long long)a2;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2;
- (void)processConstPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (void)forEachMutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)processPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3 colorSpace:(struct CGColorSpace { } *)a4;
- (void)setPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 srcPtr:(const void *)a1 srcPtrRowBytes:(long long)a2;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })tileBoundsAtIndex:(unsigned long long)a0;
- (id)newBufferData:(unsigned long long)a0;

@end
