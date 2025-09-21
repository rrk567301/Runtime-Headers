@class NSMutableArray, MPSGraphType;

@interface MPSGraphListData : MPSGraphTensorData {
    NSMutableArray *_list;
    long long _maxSize;
    MPSGraphType *_elementType;
}

- (long long)maxSize;
- (id)elementType;
- (id)list;
- (void).cxx_destruct;
- (id)mpsndarray;
- (id)clonedList;
- (id)initEmptyListWithDevice:(id)a0 maxSize:(long long)a1 elementType:(id)a2;
- (id)initWithDevice:(id)a0 list:(id)a1 maxSize:(long long)a2 elementType:(id)a3;
- (id)popBackElement;
- (void)pushBackElement:(id)a0;

@end
