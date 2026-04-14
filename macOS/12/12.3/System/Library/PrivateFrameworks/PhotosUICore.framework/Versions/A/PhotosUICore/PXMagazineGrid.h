@interface PXMagazineGrid : NSObject {
    unsigned long long _numberOfColumns;
    long long *_table;
    unsigned long long _tableSizeInBytes;
    long long _maxRows;
}

@property (readonly, nonatomic) unsigned long long currentRowsUsed;
@property (readonly, nonatomic) unsigned long long endingType;

- (void)dealloc;
- (void)setNumberOfColumns:(long long)a0;
- (void)resetWithSize:(unsigned long long)a0;
- (unsigned long long)_rowsUsed;
- (void)enlargeTable;
- (void)setTileIdentifier:(unsigned long long)a0 forArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a1;
- (long long)_numberOfEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)_isEmptyGrid;
- (BOOL)_hasAnyEmptyTilesInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)nextEmptyTileX:(long long *)a0 Y:(long long *)a1 maxWidth:(long long *)a2;
- (long long)_numberOfEmptyTilesAtTheEnd;
- (id)initWithNumberOfColumns:(long long)a0 size:(unsigned long long)a1;
- (void)clearArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;
- (BOOL)isPerfectEnding;
- (BOOL)isGoodEnding;
- (BOOL)_hasAnyTilesUsedInArea:(struct PXMagazineRect { struct PXMagazineOrigin { long long x0; long long x1; } x0; struct PXMagazineSize { long long x0; long long x1; } x1; })a0;

@end
