@class NSMeasurement;

@interface CMAmbientPressureData : CMLogItem <SRSampleDirectExporting>

@property (readonly, nonatomic) NSMeasurement *pressure;
@property (readonly, nonatomic) NSMeasurement *temperature;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPressure:(struct { float x0; float x1; })a0 andTimestamp:(double)a1;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)a0;
- (BOOL)sr_prefersUTF8StringRepresentation;

@end
