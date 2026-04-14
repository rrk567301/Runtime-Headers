@interface PPTHistogram : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct unique_ptr<ppt::PPTHistogram_Internal<unsigned long, double>, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> { struct __compressed_pair<ppt::PPTHistogram_Internal<unsigned long, double> *, std::default_delete<ppt::PPTHistogram_Internal<unsigned long, double>>> { void *__value_; } __ptr_; } _histogramPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long binCount;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long dimensionCount;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithHistogram:(id)a0;
- (id)initWithDimensions:(id)a0;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1;
- (id)JSONRepresentation;
- (void)recordSample:(id)a0;
- (id)initWithBinCount:(unsigned long long)a0 range:(struct { double x0; double x1; })a1 samples:(id)a2;
- (void)recordSample:(id)a0 withAccumulatorValue:(id)a1;
- (void)recordOneDimensionSamples:(id)a0;
- (id)processBinData:(struct PPTHistogramBin_Internal<unsigned long, double> { unsigned long long x0; double x1; double x2; double x3; double x4; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x5; struct vector<std::vector<double>, std::allocator<std::vector<double>>> { void *x0; void *x1; struct __compressed_pair<std::vector<double> *, std::allocator<std::vector<double>>> { void *x0; } x2; } x6; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x7; })a0;
- (BOOL)isEqualToHistogram:(id)a0;
- (id)frequencyBins;
- (id)cumulativeFrequencyBins;
- (id)binIndicesFor:(id)a0;
- (id)binDataAt:(id)a0;
- (id)binData;
- (double)valueForPercentile:(double)a0;
- (struct { double x0; double x1; })dimensionRange:(int)a0;
- (double)dimensionArea:(int)a0;
- (double)dimensionMinSample:(int)a0;
- (double)dimensionMaxSample:(int)a0;
- (double)dimensionMean:(int)a0;
- (double)dimensionMedian:(int)a0;
- (double)dimensionMode:(int)a0;
- (double)dimensionVariance:(int)a0;
- (id)dimensionLabel:(int)a0;
- (id)dimensionCategories:(int)a0;

@end
