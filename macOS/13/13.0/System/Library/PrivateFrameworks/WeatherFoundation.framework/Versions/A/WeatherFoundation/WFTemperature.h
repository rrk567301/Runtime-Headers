@interface WFTemperature : NSObject <NSCopying, NSSecureCoding> {
    struct { double celsiusVal; double kelvinVal; double fahrenheitVal; } _temperatureValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double celsius;
@property (nonatomic) double fahrenheit;
@property (nonatomic) double kelvin;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTemperatureUnit:(int)a0 value:(double)a1;
- (BOOL)isEqualToTemperature:(id)a0;
- (double)temperatureForUnit:(int)a0;
- (void)_setValue:(double)a0 forUnit:(int)a1;
- (BOOL)_unitIsHydrated:(int)a0 outputValue:(out double *)a1;
- (void)_resetTemperatureValues;

@end
