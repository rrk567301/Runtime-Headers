@class NSString, NSNumber;

@interface PMRMeasurement : NSObject {
    NSString *_valueAsString;
    NSString *_observationTimestampAsString;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSString *comment;
@property (nonatomic) double observationTimestamp;
@property (retain, nonatomic) NSString *units;

+ (id)withKey:(id)a0 fixedPointNanosecondValue:(unsigned long long)a1;
+ (id)withKey:(id)a0 value:(id)a1;

- (id)valueAsString;
- (void)setIntegerValue:(long long)a0;
- (void)setDoubleValue:(double)a0;
- (double)doubleValue;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)setUnsignedIntegerValue:(unsigned long long)a0;
- (BOOL)isEqualToMeasurement:(id)a0;
- (id)observationTimestampAsString;
- (void)setFixedPointNanosecondValue:(unsigned long long)a0;
- (void)setValueAsString:(id)a0;

@end
