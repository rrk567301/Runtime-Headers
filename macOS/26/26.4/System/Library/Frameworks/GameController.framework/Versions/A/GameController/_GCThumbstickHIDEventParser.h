@interface _GCThumbstickHIDEventParser : _GCHIDEventParser <NSSecureCoding> {
    unsigned long long _xAxisKey;
    unsigned long long _yAxisKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requiredOrdinal;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)parse:(struct __IOHIDEvent { } *)a0 into:(id)a1;
- (void)parseXAxisForKey:(unsigned long long)a0;
- (void)parseYAxisForKey:(unsigned long long)a0;

@end
