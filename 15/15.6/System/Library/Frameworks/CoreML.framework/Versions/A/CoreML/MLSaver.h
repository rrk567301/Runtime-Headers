@interface MLSaver : NSObject

+ (char)saveModelToArchive:(void *)a0 model:(id)a1 error:(id *)a2;
+ (char)copyModelAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (char)saveModelToArchive:(void *)a0 model:(id)a1 compilerOptions:(id)a2 error:(id *)a3;
+ (char)saveModelToAssetAtURL:(id)a0 model:(id)a1 error:(id *)a2;

@end
