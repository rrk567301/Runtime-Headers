@class VNEntityIdentificationModelTrainingData;

@interface VNMutableEntityIdentificationModel : VNEntityIdentificationModel <VNEntityIdentificationModelTrainingDataDelegate> {
    VNEntityIdentificationModelTrainingData *_trainingData;
}

+ (id)modelWithConfiguration:(id)a0 error:(id *)a1;
+ (char)canCreateModelOfClass:(Class)a0 withObjects:(id)a1 error:(id *)a2;
+ (id)modelFromPersonsModel:(id)a0 error:(id *)a1;
+ (id)modelWithConfiguration:(id)a0 dataSource:(id)a1 error:(id *)a2;
+ (id)newModelForVersion:(unsigned long long)a0 modelObjects:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (char)addAllPersonsFromPersonsModel:(id)a0 error:(id *)a1;
- (char)addObservations:(id)a0 toEntityWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (char)addPersonWithUniqueIdentifier:(id)a0 fromPersonsModel:(id)a1 error:(id *)a2;
- (void)entityIdentificationModelTrainingDataWasModified:(id)a0;
- (char)removeAllObservationsFromEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (char)removeEntityWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (char)removeObservations:(id)a0 fromEntityWithUniqueIdentifier:(id)a1 error:(id *)a2;
- (char)validateWithCanceller:(id)a0 error:(id *)a1;

@end
