@interface TSTMergeListWrapper : NSObject {
    struct vector<TSUCellRect, std::allocator<TSUCellRect>> { struct TSUCellRect *__begin_; struct TSUCellRect *__end_; struct __compressed_pair<TSUCellRect *, std::allocator<TSUCellRect>> { struct TSUCellRect *__value_; } __end_cap_; } _mergeList;
}

@property (readonly) unsigned long long count;
@property (readonly) char isEmpty;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (void)addRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; } x0; struct { unsigned int x0; unsigned int x1; } x1; })a0;
- (id)initWithMergeList:(const void *)a0;
- (id)mergeListWrapperWithRangesPassingTest:(id /* block */)a0;
- (id)regionForList;

@end
