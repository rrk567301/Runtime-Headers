@interface VNRecognizeDocumentsRequestConfiguration : VNRecognizeTextRequestConfiguration

@property (nonatomic) char detectionOnly;
@property (nonatomic) char usesAlternateLineGrouping;
@property (nonatomic) char usesFormFieldDetection;
@property (nonatomic) unsigned long long maximumCandidateCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
