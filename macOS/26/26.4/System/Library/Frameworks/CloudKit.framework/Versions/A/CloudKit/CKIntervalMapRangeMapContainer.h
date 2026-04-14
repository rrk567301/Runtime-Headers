@interface CKIntervalMapRangeMapContainer : NSObject {
    struct RangeDataVector<unsigned long, unsigned long, id, 0U, std::less<id>> { struct vector<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>, std::allocator<lldb_private::AugmentedRangeData<unsigned long, unsigned long, id>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } m_entries; struct less<id> { } m_compare; } rangeMap;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
