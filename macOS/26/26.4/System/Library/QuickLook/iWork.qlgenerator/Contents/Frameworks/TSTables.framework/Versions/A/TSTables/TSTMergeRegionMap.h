@interface TSTMergeRegionMap : TSPObject

@property (readonly, nonatomic) struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct { struct TSUCellRect *__cap_; } ; } mergedRects;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
