@class NSArray;

@interface ShaderGraphService : NSObject

@property (class, nonatomic, readonly) NSArray *builtInGeometryPropertyNames;

+ (id)materialFromSource:(id)a0 functionConstantValues:(id)a1 error:(id *)a2;
+ (id)metalLibraryFromMaterial:(id)a0 forDevice:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)sourceFromArchiveData:(id)a0 error:(id *)a1;
+ (id)archiveSource:(id)a0 error:(id *)a1;
+ (id)materialSourceFromGraph:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)archiveMaterial:(id)a0 error:(id *)a1;
+ (id)materialFromGraph:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)materialFromGraph:(id)a0 error:(id *)a1;
+ (id)materialWithArchiveData:(id)a0 error:(id *)a1;
+ (id)metalLibraryFromMaterial:(id)a0 forDevice:(id)a1 error:(id *)a2;

- (id)init;

@end
