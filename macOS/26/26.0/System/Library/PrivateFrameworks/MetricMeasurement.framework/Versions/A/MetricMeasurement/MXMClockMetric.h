@class MXMSampleTag, MXMInstrument;

@interface MXMClockMetric : MXMMetric {
    MXMSampleTag *_tag;
}

@property (class, readonly, nonatomic) MXMClockMetric *allTime;
@property (class, readonly, nonatomic) MXMClockMetric *absoluteTime;
@property (class, readonly, nonatomic) MXMClockMetric *continuousTime;

@property (readonly, nonatomic) MXMInstrument *instrument;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTag:(id)a0;
- (BOOL)_shouldConstructProbe;
- (id)_unit;
- (id)_unitWithTag:(id)a0;
- (BOOL)harvestData:(id *)a0 error:(id *)a1;

@end
