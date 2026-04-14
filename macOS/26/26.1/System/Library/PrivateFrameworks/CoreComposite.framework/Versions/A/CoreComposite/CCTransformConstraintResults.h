@interface CCTransformConstraintResults : NSObject <NSCopying, NSSecureCoding> {
    BOOL _is_violated;
    void /* unknown type, empty encoding */ _eulerAnglesInRadians;
    void /* unknown type, empty encoding */ _position;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
