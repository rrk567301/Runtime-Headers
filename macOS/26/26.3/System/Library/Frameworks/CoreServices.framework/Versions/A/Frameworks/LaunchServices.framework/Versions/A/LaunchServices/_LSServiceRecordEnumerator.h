@class NSPasteboard;

@interface _LSServiceRecordEnumerator : _LSRecordEnumerator {
    struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *__begin_; unsigned int *__end_; struct { unsigned int *__cap_; } ; } _serviceIDs;
}

@property (retain) NSPasteboard *pasteboard;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_getObject:(id *)a0 atIndex:(unsigned long long)a1 context:(struct LSContext { id x0; } *)a2;
- (BOOL)_prepareWithContext:(struct LSContext { id x0; } *)a0 error:(id *)a1;
- (id).cxx_construct;

@end
