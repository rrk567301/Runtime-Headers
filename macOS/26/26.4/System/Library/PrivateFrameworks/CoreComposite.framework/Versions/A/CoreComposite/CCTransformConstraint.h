@interface CCTransformConstraint : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _type;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithType:(unsigned long long)a0;
- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
