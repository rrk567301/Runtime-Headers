@interface TSTIndexingChunk : NSObject {
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _tableUID;
    struct vector<std::vector<NSString *>, std::allocator<std::vector<NSString *>>> { void *__begin_; void *__end_; struct { void *__cap_; } ; } _wordFragmentsList;
    struct vector<TSKUIDStructCoord, std::allocator<TSKUIDStructCoord>> { struct TSKUIDStructCoord *__begin_; struct TSKUIDStructCoord *__end_; struct { struct TSKUIDStructCoord *__cap_; } ; } _headerCoords;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
