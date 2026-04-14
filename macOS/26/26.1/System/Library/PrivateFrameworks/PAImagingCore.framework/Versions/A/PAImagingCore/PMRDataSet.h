@interface PMRDataSet : NSObject {
    struct DataSet { struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; double *__cap_; } _values; } _data;
}

+ (id)dataSetWithGeometricMeanOfDataSets:(id)a0;

- (double)max;
- (double)valueAtIndex:(unsigned long long)a0;
- (double)min;
- (id).cxx_construct;
- (double)median;
- (double)average;
- (id)initWithValue:(double)a0;
- (void).cxx_destruct;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)a0;
- (const void *)_const_data;
- (void)enumerateValues:(id /* block */)a0;
- (double)geometricMean;
- (BOOL)isEqualToDataSet:(id)a0;

@end
