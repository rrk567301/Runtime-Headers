@interface _GCButtonHIDEventParser : _GCHIDEventParser <NSSecureCoding> {
    unsigned long long _buttonStateKey;
    unsigned long long _buttonPressureKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requiredButtonNumber;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)parse:(struct __IOHIDEvent { } *)a0 into:(id)a1;
- (void)parseButtonPressureForKey:(unsigned long long)a0;
- (void)parseButtonStateForKey:(unsigned long long)a0;

@end
