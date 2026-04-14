@class HKQuantity;

@interface HKElectrocardiogramVoltageMeasurement : NSObject <NSCopying> {
    HKQuantity *_leadIVoltage;
}

@property (readonly, nonatomic) double timeSinceSampleStart;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLeadIVoltage:(id)a0 timeSinceSampleStart:(double)a1;
- (id)quantityForLead:(long long)a0;

@end
