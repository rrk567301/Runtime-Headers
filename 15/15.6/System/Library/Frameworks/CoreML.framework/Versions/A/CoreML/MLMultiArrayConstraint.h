@class NSArray, MLMultiArrayShapeConstraint, NSNumber;

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {
    NSNumber *_defaultOptionalValue;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) MLMultiArrayShapeConstraint *shapeConstraint;

+ (id)constraintWithShape:(id)a0 dataType:(long long)a1;
+ (id)constraintWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)defaultOptionalValue;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2 defaultOptionalValue:(id)a3;
- (char)isAllowedDataType:(long long)a0 error:(id *)a1;
- (char)isAllowedShape:(id)a0 error:(id *)a1;
- (char)isAllowedValue:(id)a0 error:(id *)a1;
- (char)isAllowedValue:(id)a0 isNeuralNetworkInputOrOutput:(char)a1 usingRank5Mapping:(char)a2 featureName:(id)a3 error:(id *)a4;

@end
