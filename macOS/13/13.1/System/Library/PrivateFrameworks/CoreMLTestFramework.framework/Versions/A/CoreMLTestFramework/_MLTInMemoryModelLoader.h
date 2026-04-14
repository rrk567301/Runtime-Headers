@interface _MLTInMemoryModelLoader : NSObject

+ (id)createInMemoryModel:(id)a0 withModelConfiguration:(id)a1 error:(id *)a2;
+ (id)modelAssetFromModelSpecAtURL:(id)a0 error:(id *)a1;
+ (id)modelSpecURLFromModelPath:(id)a0 error:(id *)a1;

@end
