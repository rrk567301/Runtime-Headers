@class MLFeatureDescription;

@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) MLFeatureDescription *valueDescription;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } countRange;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValueDescription:(id)a0 countRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)isAllowedValue:(id)a0 error:(id *)a1;

@end
