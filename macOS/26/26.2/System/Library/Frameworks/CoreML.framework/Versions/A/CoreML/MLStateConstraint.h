@class NSArray;

@interface MLStateConstraint : NSObject <MLFeatureValueConstraint, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *bufferShape;
@property (readonly, nonatomic) long long dataType;

+ (id)constraintWithBufferShape:(id)a0 dataType:(long long)a1;

- (id)shape;
- (id)initWithCoder:(id)a0;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2 defaultOptionalValue:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedShape:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)isAllowedDataType:(long long)a0 error:(id *)a1;

@end
