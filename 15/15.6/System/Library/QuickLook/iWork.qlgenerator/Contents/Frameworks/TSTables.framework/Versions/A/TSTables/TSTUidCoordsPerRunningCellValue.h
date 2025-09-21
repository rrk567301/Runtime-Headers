@class __end_cap_, __end_;

@interface TSTUidCoordsPerRunningCellValue : NSObject {
    struct vector<TSCECellValue *, std::allocator<TSCECellValue *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSCECellValue *__strong *, std::allocator<TSCECellValue *>> { id *__value_; } x1; } _cellValues;
    struct vector<TSTUidCoordsPerGroupValueTuple *, std::allocator<TSTUidCoordsPerGroupValueTuple *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<TSTUidCoordsPerGroupValueTuple *__strong *, std::allocator<TSTUidCoordsPerGroupValueTuple *>> { id *__value_; } x1; } _uidCoords;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })getUidCoordforRunningAggregate:(struct TSTRunningAggregate { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; char x1; char x2; } *)a0 tupleForCoord:(id)a1 newUidCoord:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a2 addNewUidCoordEvenIfNotFound:(char)a3 inContext:(id)a4;
- (struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })uuidCoordAtIndex:(unsigned long long)a0 templateTuple:(id)a1 runningLevel:(unsigned char)a2;

@end
