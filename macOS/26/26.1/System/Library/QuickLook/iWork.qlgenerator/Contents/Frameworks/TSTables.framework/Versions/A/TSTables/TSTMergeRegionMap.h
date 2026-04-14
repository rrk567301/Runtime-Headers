@interface TSTMergeRegionMap : TSPObject

@property (readonly, nonatomic) struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct TSUCellRect *__cap_; } mergedRects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
