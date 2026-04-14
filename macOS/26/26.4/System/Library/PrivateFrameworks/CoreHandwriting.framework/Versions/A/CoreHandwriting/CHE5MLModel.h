@interface CHE5MLModel : NSObject

+ (id)modelHash;
+ (id)inputNames;
+ (id)outputNames;
+ (id)createProgramLibraryWithError:(id *)a0;
+ (id)defaultURLOfModelInThisBundle;
+ (id)loadHashWithURL:(id)a0;

@end
