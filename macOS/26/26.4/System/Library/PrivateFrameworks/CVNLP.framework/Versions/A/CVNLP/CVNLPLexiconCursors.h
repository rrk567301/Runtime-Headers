@interface CVNLPLexiconCursors : NSObject <NSCopying> {
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> { struct _LXCursor **__begin_; struct _LXCursor **__end_; struct { struct _LXCursor **__cap_; } ; } _sortedCursors;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)count;
- (id).cxx_construct;
- (void)dealloc;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)a0;
- (id)initWithSortedCursors:(void *)a0;

@end
