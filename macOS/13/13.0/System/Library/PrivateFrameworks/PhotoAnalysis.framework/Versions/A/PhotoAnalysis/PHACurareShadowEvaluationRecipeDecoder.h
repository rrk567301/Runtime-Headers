@interface PHACurareShadowEvaluationRecipeDecoder : NSObject

+ (id)decodeRecipeUserInfo:(id)a0 models:(id)a1 photoLibrary:(id)a2 graphManager:(id)a3 trialDeploymentID:(id)a4 trialExperimentID:(id)a5 trialTreatmentID:(id)a6 decodingError:(id *)a7;
+ (id)cameraPredicate;
+ (id)allowedPredicates;
+ (BOOL)isValidFiltersByDatasetName:(id)a0;
+ (id)optionalObjectOfClass:(Class)a0 forKey:(id)a1 inDictionary:(id)a2 error:(id *)a3;
+ (id)objectOfClass:(Class)a0 forKey:(id)a1 inDictionary:(id)a2 error:(id *)a3;
+ (id)castObject:(id)a0 withName:(id)a1 toClass:(Class)a2 error:(id *)a3;
+ (id)decodingErrorWithMessage:(id)a0;
+ (id)decodeModelSpecificInfo:(id)a0 models:(id)a1;

@end
