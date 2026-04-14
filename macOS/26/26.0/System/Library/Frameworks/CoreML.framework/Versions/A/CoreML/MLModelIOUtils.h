@interface MLModelIOUtils : NSObject

+ (id)orderedNamesFromProto:(const void *)a0;
+ (id)stateDescriptionFromInterface:(void *)a0;
+ (id)functionDescriptionsFromDescriptionSpecification:(void *)a0;
+ (id)orderedStateFeatureNamesFromInterface:(void *)a0;
+ (id)orderedInputFeatureNamesFromInterface:(void *)a0;
+ (id)orderedFeatureNamesFromInterface:(void *)a0 forInput:(BOOL)a1;
+ (id)populateConstraintsForImageFeatureDescription:(const void *)a0;
+ (BOOL)serializeMetadataAndInterfaceFromSpecification:(void *)a0 archive:(void *)a1 error:(id *)a2;
+ (id)specificationURLFromModelAtURL:(id)a0 error:(id *)a1;
+ (id)orderedOutputFeatureNamesFromInterface:(void *)a0;
+ (id)populateConstraintsForArrayFeatureType:(const void *)a0 dataType:(long long)a1 constraintClass:(Class)a2 defaultOptionalValue:(id)a3;
+ (id)populateConstraintsForImageFeatureDescriptionElement:(void *)a0;
+ (id)defaultFunctionNameFromDescriptionSpecification:(void *)a0;
+ (id)descriptionFromProto:(const void *)a0;
+ (id)deserializeMetadataAndInterfaceFromArchive:(void *)a0 error:(id *)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromAllowedSizeRangeProtoMessage:(const void *)a0;
+ (BOOL)serializeVersionInfo:(id)a0 archive:(void *)a1 error:(id *)a2;
+ (id)loadFromModelSpecificationInArchive:(void *)a0 withClass:(Class)a1 versionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)trainingInputDescriptionFromInterface:(void *)a0;
+ (id)versionForSerializedSpecification:(void *)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)deserializeInterfaceFormat:(void *)a0 archive:(void *)a1 error:(id *)a2;
+ (BOOL)serializeInterfaceFormat:(void *)a0 archive:(void *)a1 error:(id *)a2;
+ (id)serializeSpecification:(void *)a0 toArchive:(void *)a1 error:(id *)a2;
+ (id)deserializeVersionInfoFromArchive:(void *)a0 error:(id *)a1;
+ (id)inputDescriptionFromInterface:(void *)a0;
+ (id)outputDescriptionFromInterface:(void *)a0;
+ (id)populateConstraintsForFeatureDescription:(const void *)a0;
+ (id)featureDescriptionsFromProto:(const void *)a0;

@end
