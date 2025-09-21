@interface SignpostSupportMachTimeTranslationRange : NSObject

@property (readonly, nonatomic) unsigned long long startMachAbsoluteTime;
@property (readonly, nonatomic) unsigned long long endMachAbsoluteTime;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly, nonatomic) long long absoluteMinusContinuousDelta;
@property (readonly, nonatomic) long long continuousMinusAbsoluteDelta;
@property (readonly, nonatomic) unsigned long long machContinuousTimeDuration;

- (id)debugDescription;
- (char)isEqual:(id)a0;
- (id)serializableArrayRepresentation;
- (char)containsMachAbsoluteTime:(unsigned long long)a0;
- (char)containsMachContinuousTime:(unsigned long long)a0;
- (id)initWithArrayRepresentation:(id)a0;
- (id)initWithStartMachAbsoluteTime:(unsigned long long)a0 startContinuousTime:(unsigned long long)a1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)a0;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)a0;
- (char)setEndMachAbsoluteTimestamp:(unsigned long long)a0 endMachContinuousTime:(unsigned long long)a1;

@end
