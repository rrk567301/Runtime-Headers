@interface STWeatherUnits : STSiriModelObject {
    long long _temperatureUnits;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)temperatureUnits;
- (id)_initWithTemperatureUnits:(long long)a0;

@end
