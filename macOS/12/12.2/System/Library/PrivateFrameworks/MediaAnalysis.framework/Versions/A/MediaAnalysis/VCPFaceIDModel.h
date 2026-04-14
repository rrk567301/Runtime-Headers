@interface VCPFaceIDModel : NSObject

+ (id)faceObservationFromFaceprintData:(id)a0;
+ (id)newMutablePersonsModel;
+ (id)classifyFaceObservation:(id)a0 withModel:(id)a1 error:(id *)a2;
+ (BOOL)persistModel:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (BOOL)addFaceObservations:(id)a0 forPersonIdentifier:(id)a1 toModel:(id)a2 error:(id *)a3;
+ (id)loadVIPModelAtPath:(id)a0 withVIPType:(unsigned long long)a1 error:(id *)a2;
+ (float)petClassificationThreshold;
+ (id)_loadModelAtPath:(id)a0 error:(id *)a1;
+ (id)_loadPetsModelAtPath:(id)a0 error:(id *)a1;
+ (id)personVIPModelFileName;
+ (id)petVIPModelFileName;
+ (id)animalObservationFromAnimalprintData:(id)a0;
+ (id)classifyAnimalObservation:(id)a0 withModel:(id)a1 error:(id *)a2;
+ (BOOL)persistPetsModel:(id)a0 toPath:(id)a1 error:(id *)a2;

@end
