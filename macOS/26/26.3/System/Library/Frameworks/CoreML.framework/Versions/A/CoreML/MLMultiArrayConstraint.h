@class NSArray, MLMultiArrayShapeConstraint, NSNumber;

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {
    NSNumber *_defaultOptionalValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) MLMultiArrayShapeConstraint *shapeConstraint;

+ (id)constraintWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2;
+ (id)constraintWithShape:(id)a0 dataType:(long long)a1;

- (id)defaultOptionalValue;
- (id)description;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2 defaultOptionalValue:(id)a3;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedValue:(id)a0 isNeuralNetworkInputOrOutput:(BOOL)a1 usingRank5Mapping:(BOOL)a2 featureName:(id)a3 error:(id *)a4;
- (BOOL)isAllowedShape:(id)a0 error:(id *)a1;
- (BOOL)isAllowedDataType:(long long)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;

@end
