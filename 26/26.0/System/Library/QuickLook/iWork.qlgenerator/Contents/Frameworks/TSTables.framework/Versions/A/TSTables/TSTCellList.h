@class __cap_, __end_;

@interface TSTCellList : TSPObject <NSCopying> {
    struct vector<TSTCell *, std::allocator<TSTCell *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _cells;
    unsigned long long _trailingEmptyCellCount;
}

- (id)initWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cellAtIndex:(unsigned long long)a0;
- (id)addCell:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)shallowAddCell:(id)a0;
- (void)addPrecopiedCell:(id)a0;
- (id)lastCell;
- (void)replaceCell:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)trailingEmptyCellCount;

@end
