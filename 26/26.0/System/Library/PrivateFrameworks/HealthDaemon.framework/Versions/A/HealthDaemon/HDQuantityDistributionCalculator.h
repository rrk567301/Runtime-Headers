@interface HDQuantityDistributionCalculator : NSObject {
    struct HistogramState { struct vector<HistogramBucket, std::allocator<HistogramBucket>> { struct HistogramBucket *__begin_; struct HistogramBucket *__end_; struct HistogramBucket *__cap_; } _dateBuckets; double _histogramBucketAnchor; double _histogramBucketSize; long long _currentStartDateBucket; } _histogramState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)validateDateSequenceForTesting:(id)a0;
- (void)addDataPoint:(double)a0 startTime:(double)a1 endTime:(double)a2;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 anchorDate:(id)a2 intervalComponents:(id)a3 histogramBucketAnchor:(double)a4 histogramBucketSize:(double)a5;
- (id)quantityDistributionsWithUnit:(id)a0;

@end
