@interface PMRMutableDataSet : PMRDataSet

- (void *)_data;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)capacity;
- (void)addValue:(double)a0;
- (void)appendDataSet:(id)a0;

@end
