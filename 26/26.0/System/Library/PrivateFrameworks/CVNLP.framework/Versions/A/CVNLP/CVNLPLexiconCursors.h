@interface CVNLPLexiconCursors : NSObject <NSCopying> {
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> { struct _LXCursor **__begin_; struct _LXCursor **__end_; struct _LXCursor **__cap_; } _sortedCursors;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)count;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)a0;
- (id)initWithSortedCursors:(void *)a0;

@end
