@interface CLBIO_DeltaPosition : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double X;
@property (readonly, nonatomic) double Y;
@property (readonly, nonatomic) double Z;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithX:(double)a0 Y:(double)a1 Z:(double)a2;

@end
