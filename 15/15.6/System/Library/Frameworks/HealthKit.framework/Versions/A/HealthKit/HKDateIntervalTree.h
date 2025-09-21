@interface HKDateIntervalTree : NSObject {
    struct unique_ptr<HKIntervalTree<double>, std::default_delete<HKIntervalTree<double>>> { struct __compressed_pair<HKIntervalTree<double> *, std::default_delete<HKIntervalTree<double>>> { void *__value_; } __ptr_; } _tree;
}

@property (nonatomic) char mergeIntervals;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)insertInterval:(id)a0;
- (id)mergedIntervals;
- (char)hasOverlapWithInterval:(id)a0;
- (char)hasOverlapWithStartTime:(double)a0 endTime:(double)a1;
- (void)insertIntervalWithStartTime:(double)a0 endTime:(double)a1;

@end
