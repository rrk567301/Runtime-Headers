@class NSString, NSMutableArray;

@interface TSTContentComposingIterator : NSObject <TSTCellRegionIterating, TSTMutableCellIteratorDataUpdating>

@property (nonatomic) struct TSUCellCoord { unsigned int row; unsigned short column; char _preserveRow; char _preserveColumn; } minCursorCellID;
@property (nonatomic) struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct __compressed_pair<TSUCellCoord *, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__value_; } __end_cap_; } cursorCellIDs;
@property (retain, nonatomic) NSMutableArray *iterators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)terminate;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })getNext;
- (void)updateCellData:(id)a0;
- (void)addIterator:(id)a0;
- (struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })advanceToCellID:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a0;
- (void)updateFormulaForCellData:(id)a0;

@end
