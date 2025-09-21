@class _PASRng;

@interface SGModelSampler : NSObject {
    double _positiveRate;
    double _dynamicLabelRate;
    double _negativeRate;
    _PASRng *_rng;
}

- (void).cxx_destruct;
- (id)initWithPositiveRate:(double)a0 dynamicLabelRate:(double)a1 negativeRate:(double)a2 rng:(id)a3;
- (char)shouldSampleForLabel:(id)a0 isDynamicLabel:(char)a1;

@end
