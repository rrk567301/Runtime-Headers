@class NSArray;

@interface MLStateConstraint : NSObject <MLFeatureValueConstraint, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bufferShape;
@property (readonly, nonatomic) long long dataType;

+ (id)constraintWithBufferShape:(id)a0 dataType:(long long)a1;

- (id)shape;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedDataType:(long long)a0 error:(id *)a1;
- (BOOL)isAllowedShape:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2 defaultOptionalValue:(id)a3;
- (void).cxx_destruct;

@end
