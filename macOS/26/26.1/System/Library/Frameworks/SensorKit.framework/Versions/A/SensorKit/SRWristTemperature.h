@class NSString, NSMeasurement, NSDate;

@interface SRWristTemperature : NSObject <SRSampleExporting, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMeasurement *temperatureT1;
@property (readonly, nonatomic) NSMeasurement *temperatureT2;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSMeasurement *value;
@property (readonly, nonatomic) unsigned long long condition;
@property (readonly, nonatomic) NSMeasurement *errorEstimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)sr_dictionaryRepresentation;
- (id)initWithTimestamp:(id)a0 temperature:(id)a1 condition:(unsigned long long)a2 errorEstimate:(id)a3 temperatureT1:(id)a4 temperatureT2:(id)a5;

@end
