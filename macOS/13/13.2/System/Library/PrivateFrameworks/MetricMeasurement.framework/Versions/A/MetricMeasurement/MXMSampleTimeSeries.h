@interface MXMSampleTimeSeries : MXMSampleSet {
    MXMSampleTimeSeries *_time;
}

- (id)init;
- (void).cxx_destruct;
- (id)timeIndex;
- (id)initWithAbsoluteTimeSeries:(unsigned long long *)a0 length:(unsigned long long)a1;
- (id)initWithContinuousTimeSeries:(unsigned long long *)a0 length:(unsigned long long)a1;
- (id)initWithTimeSeries:(double *)a0 tag:(id)a1 unit:(id)a2 length:(unsigned long long)a3;
- (void)_appendAbsoluteTime:(unsigned long long)a0;

@end
