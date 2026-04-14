@interface _GCForceHIDEventParser : _GCHIDEventParser <NSSecureCoding> {
    unsigned long long _forceKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)parse:(struct __IOHIDEvent { } *)a0 into:(id)a1;
- (void)parseForceForKey:(unsigned long long)a0;

@end
