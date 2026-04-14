@interface VisionCoreSemanticSegmentationInferenceNetworkDescriptor : VisionCoreE5RTInferenceFunctionDescriptor

+ (id)objectClassNamesToObjectClassesDetectionStatusIndexes:(id)a0 error:(id *)a1;
+ (id)objectClassOutputNameForObjectClassID:(unsigned long long)a0 error:(id *)a1;
+ (id)objectClassOutputNamesForObjectClassIDs:(unsigned long long)a0 error:(id *)a1;
+ (id)semanticSegmentationV6AndReturnError:(id *)a0;
+ (id)objectClassIDsToObjectClassesDetectionStatusIndexes:(unsigned long long)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (id)objectMaskDescriptorsForObjectClassIDs:(unsigned long long)a0 error:(id *)a1;
- (id)objectMaskDescriptorsForObjectClassNames:(id)a0 error:(id *)a1;

@end
