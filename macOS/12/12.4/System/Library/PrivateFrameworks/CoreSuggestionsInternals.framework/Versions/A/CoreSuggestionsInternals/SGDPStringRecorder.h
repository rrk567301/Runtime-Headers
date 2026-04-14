@class _DPStringRecorder, _PASRng;

@interface SGDPStringRecorder : NSObject {
    _DPStringRecorder *_recorder;
    _PASRng *_rng;
}

- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (BOOL)recordString:(id)a0;

@end
