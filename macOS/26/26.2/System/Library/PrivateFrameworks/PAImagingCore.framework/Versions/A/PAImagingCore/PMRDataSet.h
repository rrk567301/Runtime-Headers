@interface PMRDataSet : NSObject {
    struct DataSet { struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct { double *__cap_; } ; } _values; } _data;
}

+ (id)dataSetWithGeometricMeanOfDataSets:(id)a0;

- (double)average;
- (id)initWithValue:(double)a0;
- (unsigned long long)count;
- (double)valueAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (double)max;
- (double)min;
- (double)median;
- (const void *)_const_data;
- (void)enumerateValues:(id /* block */)a0;
- (double)geometricMean;
- (BOOL)isEqualToDataSet:(id)a0;

@end
