@class NSArray;

@interface MLStateConstraint : NSObject <MLFeatureValueConstraint, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bufferShape;
@property (readonly, nonatomic) long long dataType;

+ (id)constraintWithBufferShape:(id)a0 dataType:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shape;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2 defaultOptionalValue:(id)a3;
- (char)isAllowedDataType:(long long)a0 error:(id *)a1;
- (char)isAllowedShape:(id)a0 error:(id *)a1;
- (char)isAllowedValue:(id)a0 error:(id *)a1;

@end
