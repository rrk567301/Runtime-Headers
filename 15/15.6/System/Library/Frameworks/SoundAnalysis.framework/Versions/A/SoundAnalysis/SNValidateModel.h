@interface SNValidateModel : NSObject

+ (char)ensureMultiArrayIsFreelyShapedWithConstraint:(id)a0 hasDataType:(long long)a1 error:(id *)a2;
+ (char)ensureFeatureWithDescription:(id)a0 isOptional:(char)a1 error:(id *)a2;
+ (char)ensureFeatureWithDescription:(id)a0 isOptional:(char)a1 isFreelyShapedMultiArrayWithDataType:(long long)a2 error:(id *)a3;
+ (char)ensureFeatureWithDescription:(id)a0 isOptional:(char)a1 isMultiArrayWithDataType:(long long)a2 dimensionSizeRanges:(id)a3 error:(id *)a4;
+ (char)ensureFeatureWithDescription:(id)a0 isOptional:(char)a1 isMultiArrayWithDataType:(long long)a2 shapeOptions:(id)a3 error:(id *)a4;
+ (char)ensureModelDescription:(id)a0 hasInputFeatureNames:(id)a1 hasOutputFeatureNames:(id)a2 error:(id *)a3;
+ (char)ensureMultiArrayConstraint:(id)a0 hasDataType:(long long)a1 andDimensionSizeRanges:(id)a2 error:(id *)a3;
+ (char)ensureMultiArrayConstraint:(id)a0 hasDataType:(long long)a1 andShapeOptions:(id)a2 error:(id *)a3;
+ (char)ensureMultiArrayConstraint:(id)a0 hasDataType:(long long)a1 error:(id *)a2;
+ (char)ensureMultiArrayIsFreelyShapedByShapeConstraint:(id)a0 error:(id *)a1;
+ (char)ensureMultiArrayIsRequiredByFeatureDescription:(id)a0 error:(id *)a1;
+ (char)ensureMultiArrayShapeConstraint:(id)a0 hasDimensionSizeRanges:(id)a1 error:(id *)a2;
+ (char)ensureMultiArrayShapeConstraint:(id)a0 hasShapeOptions:(id)a1 error:(id *)a2;

- (id)init;

@end
