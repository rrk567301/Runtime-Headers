@interface PMRDataSet : NSObject {
    struct DataSet { struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; double *__cap_; } _values; } _data;
}

+ (id)dataSetWithGeometricMeanOfDataSets:(id)a0;

- (double)max;
- (double)min;
- (id)initWithValue:(double)a0;
- (double)average;
- (double)valueAtIndex:(unsigned long long)a0;
- (double)median;
- (unsigned long long)count;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (const void *)_const_data;
- (void)enumerateValues:(id /* block */)a0;
- (double)geometricMean;
- (BOOL)isEqualToDataSet:(id)a0;

@end
