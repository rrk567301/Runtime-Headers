@interface PMRMutableDataSet : PMRDataSet

- (void *)_data;
- (unsigned long long)capacity;
- (void)addValue:(double)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)appendDataSet:(id)a0;

@end
