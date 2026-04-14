@interface CCDefaultOutputColorData : CCData {
    void /* unknown type, empty encoding */ _defaultOutputColor;
    BOOL _isVRMode;
    BOOL _isPQScaler;
    float _pqScaler;
    float _dimmingScaler;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
