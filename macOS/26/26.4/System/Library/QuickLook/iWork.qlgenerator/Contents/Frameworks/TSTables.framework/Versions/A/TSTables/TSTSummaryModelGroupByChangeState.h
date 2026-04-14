@class TSTCellMap;

@interface TSTSummaryModelGroupByChangeState : TSCKSosBase {
    BOOL _definedCellMap;
}

@property (readonly, nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct { double *__cap_; } ; } summaryRowHeightList;
@property (readonly, nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct { double *__cap_; } ; } labelRowHeightList;
@property (readonly, nonatomic) struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct { int *__cap_; } ; } labelRowVisibilityList;
@property (retain, nonatomic) TSTCellMap *cellMap;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end
