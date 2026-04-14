@interface PMRMutableDataSet : PMRDataSet

- (unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)a0;
- (void *)_data;
- (void)addValue:(double)a0;
- (void)appendDataSet:(id)a0;

@end
