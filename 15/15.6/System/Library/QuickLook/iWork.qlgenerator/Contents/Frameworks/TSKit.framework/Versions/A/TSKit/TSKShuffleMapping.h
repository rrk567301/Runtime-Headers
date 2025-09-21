@interface TSKShuffleMapping : NSObject <NSCopying> {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } _reverseMapping;
    char _reverseMappingValid;
}

@property (nonatomic) unsigned int firstMovedIndex;
@property (nonatomic) unsigned int destinationIndexForMove;
@property (nonatomic) unsigned int numberOfIndexesMoved;
@property (readonly, nonatomic) unsigned int startIndex;
@property (readonly, nonatomic) unsigned int endIndex;
@property (readonly, nonatomic) struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } mapping;
@property (readonly, nonatomic) unsigned int mappingSize;
@property (readonly, nonatomic) char isIdentityMapping;
@property (readonly, nonatomic) char isMoveOperation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)swapIndex:(unsigned int)a0 withIndex:(unsigned int)a1;
- (char)isMove;
- (id)initWithStartIndex:(unsigned int)a0 endIndex:(unsigned int)a1;
- (id)copyInverse;
- (void)enumerateMappingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithStartIndex:(unsigned int)a0 endIndex:(unsigned int)a1 mapping:(const void *)a2;
- (unsigned int)mapIndex:(unsigned int)a0;
- (unsigned int)reverseMapIndex:(unsigned int)a0;
- (id)sourceIndexes;
- (void)applyMappingToIndexSet:(id)a0;
- (void)enumerateMappingFollowingSwapsUsingBlock:(id /* block */)a0;
- (id)initForMovedIndexesStartingAtIndex:(unsigned int)a0 destinationIndex:(unsigned int)a1 numberOfIndexes:(unsigned int)a2;
- (void)insert:(unsigned int)a0 IndexesAtIndex:(unsigned int)a1 insertingBefore:(char)a2;
- (void)p_buildReverseMapping;
- (id)p_copyWithZone:(struct _NSZone { } *)a0 mapping:(const void *)a1;
- (void)p_invalidateReverseMapping;
- (void)remove:(unsigned int)a0 IndexesAtIndex:(unsigned int)a1;

@end
