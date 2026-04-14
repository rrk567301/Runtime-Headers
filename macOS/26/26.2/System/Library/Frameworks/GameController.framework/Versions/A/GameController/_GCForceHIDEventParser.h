@interface _GCForceHIDEventParser : _GCHIDEventParser <NSSecureCoding> {
    unsigned long long _forceKey;
    double _physicalMin;
    double _physicalMax;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)parse:(struct __IOHIDEvent { } *)a0 into:(id)a1;
- (void)parseForceForKey:(unsigned long long)a0;
- (void)parseForceForKey:(unsigned long long)a0 normlaizedWithMinimumValue:(double)a1 maxiumumValue:(double)a2;

@end
