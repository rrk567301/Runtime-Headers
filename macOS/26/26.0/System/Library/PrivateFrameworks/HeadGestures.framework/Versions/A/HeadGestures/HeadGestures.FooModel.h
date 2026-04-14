@interface HeadGestures.FooModel : MLModel

- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithDescription:(id)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initInterfaceAndMetadataWithCompiledArchive:(void *)a0 error:(id *)a1;
- (id)initWithDescription:(id)a0 configuration:(id)a1;
- (id)initWithName:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4 configuration:(id)a5;

@end
