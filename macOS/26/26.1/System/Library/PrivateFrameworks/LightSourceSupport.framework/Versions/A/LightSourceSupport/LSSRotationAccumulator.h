@class LSSAccumulator;

@interface LSSRotationAccumulator : NSObject {
    LSSAccumulator *_accumulator;
    struct { void /* unknown type, empty encoding */ vector; } _prevValue;
    BOOL _hasValue;
    float _sampleClampMax;
    float _sampleBias;
}

- (void).cxx_destruct;
- (id)init;

@end
