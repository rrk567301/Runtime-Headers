@interface _LSApplicationRecordSpecificUnitsEnumerator : _LSRecordEnumerator {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; unsigned int *__cap_; } _unitIDs;
    unsigned long long _options;
}

- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (id).cxx_construct;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithContext:(struct LSContext { id x0; } *)a0 options:(unsigned long long)a1 unitIDs:(const unsigned int *)a2 unitCount:(unsigned long long)a3;

@end
