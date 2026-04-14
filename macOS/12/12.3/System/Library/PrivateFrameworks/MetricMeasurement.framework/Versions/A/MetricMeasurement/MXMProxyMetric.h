@class MXMMetric, MXMProbe;

@interface MXMProxyMetric : MXMMetric

@property (readonly, retain) MXMMetric *_underlyingMetric;
@property (readonly, copy) MXMProbe *_remoteProbe;
@property (readonly, copy) MXMMetric *metric;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_sampleMode;
- (void)willStop;
- (id)initWithMetric:(id)a0;
- (void)willStartAtEstimatedTime:(unsigned long long)a0;
- (BOOL)_shouldConstructProbe;
- (id)_constructProbe;
- (BOOL)prepareWithOptions:(id)a0 error:(id *)a1;
- (void)didStartAtTime:(unsigned long long)a0 startDate:(id)a1;
- (void)didStartAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 startDate:(id)a2;
- (void)didStopAtTime:(unsigned long long)a0 stopDate:(id)a1;
- (void)didStopAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 stopDate:(id)a2;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldNeverWrapInProxy;

@end
