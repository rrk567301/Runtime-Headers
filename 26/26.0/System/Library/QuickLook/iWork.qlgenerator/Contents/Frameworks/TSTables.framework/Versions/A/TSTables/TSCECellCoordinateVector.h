@class NSObject;
@protocol OS_dispatch_semaphore;

@interface TSCECellCoordinateVector : NSObject {
    struct vector<TSUCellCoord, std::allocator<TSUCellCoord>> { struct TSUCellCoord *__begin_; struct TSUCellCoord *__end_; struct TSUCellCoord *__cap_; } _cellCoordinates;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (void *)cellCoordinates;
- (void)addCellCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (struct unordered_set<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> { struct __hash_table<TSUCellCoord, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<TSUCellCoord>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>>> { void **x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<TSUCellCoord, void *> *> *>> { unsigned long long x0; } x1; } x0; struct __hash_node_base<std::__hash_node<TSUCellCoord, void *> *> { void *x0; } x1; unsigned long long x2; float x3; } x0; })cellCoordinatesSet;
- (void)removeAllCellCoordinates;

@end
