@interface FxSample : NSObject {
    struct FxSamplePriv { double x0; id x1; id x2; id x3; } *_priv;
}

+ (id)_requiredSamplesForSamples:(id)a0;

- (void)dealloc;
- (id)init;
- (id)stream;
- (id)context;
- (void)setContext:(id)a0;
- (double)time;
- (void)setStream:(id)a0;
- (void)setTime:(double)a0;
- (id)regionOfInterest;
- (void)setRegionOfInterest:(id)a0;
- (id)domainOfDefinition;
- (unsigned long long)fieldOrder;
- (id)evaluateWithOptions:(id)a0;
- (BOOL)supportsContextType:(int)a0;
- (BOOL)isPredetermined;
- (id)requiredSamples;

@end
