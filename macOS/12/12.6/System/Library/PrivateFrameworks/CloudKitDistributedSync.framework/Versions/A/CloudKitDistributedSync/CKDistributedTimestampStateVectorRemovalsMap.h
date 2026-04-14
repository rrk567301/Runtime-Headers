@interface CKDistributedTimestampStateVectorRemovalsMap : NSObject {
    struct RangeDataVector<unsigned long, unsigned long, id, 0U, std::less<id>> { struct vector<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>, std::allocator<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>>> { void *__begin_; void *__end_; struct __compressed_pair<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id> *, std::allocator<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>>> { void *__value_; } __end_cap_; } m_entries; struct less<id> { } m_compare; } rangeMap;
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *__value_; } __end_cap_; } workingIndexArray;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)sort;
- (void)addIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObject:(id)a1;
- (unsigned long long)addObjectsAtIndex:(unsigned long long)a0 toSet:(id)a1;

@end
