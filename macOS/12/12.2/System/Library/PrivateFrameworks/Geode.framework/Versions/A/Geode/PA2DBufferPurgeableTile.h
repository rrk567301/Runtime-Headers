@interface PA2DBufferPurgeableTile : PA2DBufferMutableTile {
    int _pendingPurgeLevel;
    unsigned long long _accessCount;
    unsigned long long _appliedAccessCount;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (unsigned long long)accessCount;
- (void)setPurgeLevel:(int)a0;
- (BOOL)beginAccess;
- (void)beginAccess:(id /* block */)a0;
- (void)endAccess;
- (id)initWithEmptyData:(id)a0 bounds:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1 bytesPerRow:(long long)a2 format:(int)a3 fill:(id)a4;
- (id)newTileWithBounds:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 bytesPerRow:(long long)a1;
- (id)newMutableDataWithLength:(unsigned long long)a0;
- (id)_copyObject:(id)a0;

@end
