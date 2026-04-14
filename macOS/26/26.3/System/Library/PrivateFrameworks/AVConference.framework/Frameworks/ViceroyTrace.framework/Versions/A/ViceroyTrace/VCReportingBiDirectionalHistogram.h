@interface VCReportingBiDirectionalHistogram : VCHistogram {
    long long *_signedBuckets;
}

- (id)description;
- (void)dealloc;
- (void)addValue:(unsigned int)a0 withDelta:(long long)a1;
- (void)convertHistogramIntoPercentageUsingValuesFrom:(id)a0;
- (id)initWithType:(int)a0 bucketValues:(id)a1;

@end
