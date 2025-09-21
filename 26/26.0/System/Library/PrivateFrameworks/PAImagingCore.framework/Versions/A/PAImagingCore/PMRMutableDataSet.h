@interface PMRMutableDataSet : PMRDataSet

- (unsigned long long)capacity;
- (void *)_data;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addValue:(double)a0;
- (void)appendDataSet:(id)a0;

@end
