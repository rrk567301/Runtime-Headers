@interface _GCProximityHIDEventParser : _GCHIDEventParser <NSSecureCoding> {
    unsigned long long _fingerTouchKey;
    unsigned long long _levelKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)parse:(struct __IOHIDEvent { } *)a0 into:(id)a1;
- (void)parseFingerTouchForKey:(unsigned long long)a0;
- (void)parseLevelForKey:(unsigned long long)a0;

@end
