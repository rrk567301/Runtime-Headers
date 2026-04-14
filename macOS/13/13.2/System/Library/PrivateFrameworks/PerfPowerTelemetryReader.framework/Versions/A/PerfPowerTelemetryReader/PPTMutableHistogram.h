@interface PPTMutableHistogram : PPTHistogram

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)recordSample:(id)a0;
- (void)recordSample:(id)a0 withAccumulatorValue:(id)a1;
- (void)recordSamples:(id)a0;
- (void)recordSample:(id)a0 withWeight:(unsigned long long)a1;

@end
