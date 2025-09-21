@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject {
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_highTemperature;
    NSNumber *_lowTemperature;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)temperature;
- (id)highTemperature;
- (long long)conditionCode;
- (id)lowTemperature;
- (id)_initWithConditionCode:(long long)a0 temperature:(id)a1 highTemperature:(id)a2 lowTemperature:(id)a3;

@end
