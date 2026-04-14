@interface PMRMutableDataSet : PMRDataSet

- (id)initWithCapacity:(unsigned long long)a0;
- (void *)_data;
- (unsigned long long)capacity;
- (void)addValue:(double)a0;
- (void)appendDataSet:(id)a0;

@end
