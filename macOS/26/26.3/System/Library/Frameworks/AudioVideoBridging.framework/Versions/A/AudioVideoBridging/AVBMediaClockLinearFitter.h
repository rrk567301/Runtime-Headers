@interface AVBMediaClockLinearFitter : AVBMediaClockFitter {
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _numerator;
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _denominator;
    long long _intercept;
    double _slope;
    double _offset;
    unsigned long long _timeOffset;
    unsigned long long _sampleOffset;
}

- (long long)intercept;
- (double)offset;
- (id).cxx_construct;
- (double)slope;
- (unsigned long long)denominator;
- (unsigned long long)numerator;
- (id)initWithMediaClockSequence:(id)a0;
- (id)mediaClockSequenceForSampleTimes:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
