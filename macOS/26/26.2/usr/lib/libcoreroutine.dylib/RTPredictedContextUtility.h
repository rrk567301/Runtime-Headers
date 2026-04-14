@interface RTPredictedContextUtility : NSObject

+ (id)modelPath;
+ (BOOL)deleteModelWithOutError:(id *)a0;
+ (id)readAlgorithmStateWithError:(id *)a0;
+ (id)readModelWithError:(id *)a0;
+ (BOOL)writeModel:(id)a0 error:(id *)a1;

@end
