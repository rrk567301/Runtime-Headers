@interface TSTCellRegionRowMajorReverseIterator : TSTCellRegionRowMajorIterator

- (struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })getNext;
- (id)initWithCellRegion:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a0;

@end
