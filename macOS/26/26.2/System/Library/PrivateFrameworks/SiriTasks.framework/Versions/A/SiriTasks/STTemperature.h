@interface STTemperature : STSiriModelObject {
    double _value;
    long long _units;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)units;
- (double)value;
- (id)_initWithValue:(double)a0 units:(long long)a1;

@end
