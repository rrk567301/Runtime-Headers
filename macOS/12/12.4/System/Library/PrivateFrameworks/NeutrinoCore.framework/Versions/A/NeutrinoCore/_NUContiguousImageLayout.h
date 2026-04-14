@interface _NUContiguousImageLayout : NUImageLayout

- (struct { long long x0; long long x1; })tileSize;
- (struct { long long x0; long long x1; })borderSize;
- (void)enumerateTilesForReadingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 withBlock:(id /* block */)a1;
- (long long)tileCount;
- (id)tileInfoAtIndex:(long long)a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })frameRectForTileAtIndex:(long long)a0;
- (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })contentRectForTileAtIndex:(long long)a0;
- (long long)tileIndexAtPoint:(struct { long long x0; long long x1; })a0;
- (void)enumerateTilesForWritingInRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 withBlock:(id /* block */)a1;
- (struct { long long x0; long long x1; })tileCounts;

@end
