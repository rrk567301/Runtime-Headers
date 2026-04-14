@class NSArray, VNRequestSpecifier;

@interface VNEntityIdentificationModelTrainedModelVIPv3 : VNEntityIdentificationModelTrainedModel {
    struct shared_ptr<vision::mod::FaceID3Model> { struct FaceID3Model *__ptr_; struct __shared_weak_count *__cntrl_; } _faceIDModel;
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;
    NSArray *_entityUniqueIdentifiers;
    NSArray *_entityPrintCounts;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)getStoredRepresentationTag:(unsigned int *)a0 forModelVersion:(unsigned long long)a1 error:(id *)a2;
+ (id)trainedModelBuiltFromConfiguration:(id)a0 dataProvider:(id)a1 canceller:(id)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)entityPrintOriginatingRequestSpecifier;
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)predictionsForObservation:(id)a0 limit:(unsigned long long)a1 canceller:(id)a2 error:(id *)a3;
- (unsigned long long)entityCount;
- (id)entityUniqueIdentifiers;
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)a0;
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)a0;
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)a0;
- (id)printCountsForAllEntities;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceID3Model> { struct FaceID3Model *x0; struct __shared_weak_count *x1; })a0 entityPrintOriginatingRequestSpecifier:(id)a1 entityUniqueIdentifiers:(id)a2 entityPrintCounts:(id)a3;

@end
