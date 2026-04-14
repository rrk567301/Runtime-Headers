@interface MLNearestNeighborsLinearIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } vData;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } vDataL2Squared;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long numDataPoints;
@property (nonatomic) unsigned long long numDimensions;

- (unsigned long long)dataPointCount;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; void *x2; })findNearestNeighbors:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; void *x2; })findNearestNeighbors:(unsigned long long)a0 toQueryPoint:(const void *)a1;
- (id)initWithDataset:(struct vector<float, std::allocator<float>> { float *x0; float *x1; float *x2; })a0 numberOfDimensions:(unsigned long long)a1;
- (BOOL)updateWithData:(const void *)a0 error:(id *)a1;

@end
