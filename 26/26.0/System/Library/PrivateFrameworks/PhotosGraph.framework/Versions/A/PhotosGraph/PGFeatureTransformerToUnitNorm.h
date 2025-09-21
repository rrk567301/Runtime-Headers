@interface PGFeatureTransformerToUnitNorm : PGFeatureSliceTransformer

+ (id)name;
+ (id)instanceWithParameters:(id)a0 error:(id *)a1;

- (id)_generateErrorWithErrorCode:(long long)a0 andMessage:(id)a1;
- (id)applyTransformationToFloatVector:(id)a0 error:(id *)a1;

@end
