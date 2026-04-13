@interface VNDetectionprintTensor : VNEspressoModelImageprint

+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (BOOL)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (BOOL)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)a0;
+ (unsigned long long)serializationMagicNumber;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)a0;

@end
