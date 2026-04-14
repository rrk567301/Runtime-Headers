@interface PVFaceIDModel : NSObject

+ (id)defaultConfiguration;
+ (id)modelFileName;
+ (id)faceObservationFromFaceprintData:(id)a0;
+ (id)newMutablePersonsModel;
+ (id)classifyFaceObservation:(id)a0 withModel:(id)a1 error:(id *)a2;
+ (id)loadModelAtPath:(id)a0 error:(id *)a1;
+ (BOOL)persistModel:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (BOOL)addFaceObservations:(id)a0 forPersonIdentifier:(id)a1 toModel:(id)a2 error:(id *)a3;

@end
