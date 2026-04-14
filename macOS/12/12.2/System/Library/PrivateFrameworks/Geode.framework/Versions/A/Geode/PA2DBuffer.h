@class PFCopyOnWriteInterest;

@interface PA2DBuffer : NSObject <NSCopying, NSMutableCopying> {
    PFCopyOnWriteInterest *_backing;
    int _format;
    unsigned long long _width;
    unsigned long long _height;
}

@property (nonatomic) struct CGColorSpace { } *colorSpace;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })size;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)width;
- (unsigned long long)height;
- (int)format;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })extent;
- (id)ciImage;
- (unsigned long long)tileCount;
- (void)getPixelsForROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 destPtr:(void *)a1 destPtrRowBytes:(long long)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2;
- (id)initWithSize:(unsigned long long)a0 :(unsigned long long)a1 format:(int)a2 fill:(void *)a3;
- (void)processConstPixelsInArea:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id)a1;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 processor:(id /* block */)a1;
- (void)setPurgeLevel:(int)a0 forROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (id)initWithBacking:(id)a0;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0 endAccessOnDealloc:(BOOL)a1 useDataProviderForContiguous:(BOOL)a2;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0 cropToSize:(struct CGSize { double x0; double x1; })a1 cropCenter:(struct CGPoint { double x0; double x1; })a2 endAccessOnDealloc:(BOOL)a3 useDataProviderForContiguous:(BOOL)a4;
- (struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })tileBoundsAtIndex:(unsigned long long)a0;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)endAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (void)beginAccess:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 emptyProcessor:(id /* block */)a1;
- (id)copyWriteVisitBacking:(id /* block */)a0;
- (BOOL)writeTIFFToDisk:(id)a0;
- (id)_ciImageWithProvider:(id)a0;
- (id)ciImageWithTransferredAccessCount;

@end
